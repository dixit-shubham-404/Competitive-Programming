/*
Write a program to perform insertions and deletions on a Binary Search Tree.

Perform Q operations of the form:

i x : Insert x in the BST.
d x : Delete x from the BST.

Each element is assigned a value based on its position when it was inserted into the BST. 
The position of an element is calculated as follows:

The position of the root node is 1.
If the position of a node is p, the positions of its left and right children are (2∗p) and (2∗p+1), respectively.
Note that the positions of the elements may change after some operations, but their values don't.

For each of the Q queries, output the value that is associated with that element in the BST. 
It is guaranteed that there will be no duplicates in the BST, and a delete operation on an element 
shall only be called if it's present in the BST.

INPUT:
The first line contains Q, the number of operations to be performed.
Each of the next Q lines contain either i x or d x, as described above.
OUTPUT:
For each query, print the value associated with this element after it was inserted into, or before 
it was deleted from the BST, based on the query.

CONSTRAINTS:
1≤Q≤103
−109≤x≤109
1≤ position(x) ≤232−1
It is guaranteed that there will be no duplicates in the BST.
A delete operation on an element will only be called if it's present in the BST.
*/
#include<iostream>
using namespace std;


struct node 
{ 
    int key; 
    struct node *left, *right; 
}; 
   
 
struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
   
// A utility function to do inorder traversal of BST 
void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d \n", root->key); 
        inorder(root->right); 
    } 
} 
   
/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key) 
{ 
    
    if (node == NULL) return newNode(key); 
  
    
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
  
    
    return node; 
} 

struct node * minValueNode(struct node* node) 
{ 
    struct node* current = node; 
  
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL) 
        current = current->left; 
  
    return current; 
} 

struct node* deleteNode(struct node* root, int key) 
{ 
    // base case 
    if (root == NULL) return root; 
  
    // If the key to be deleted is smaller than the root's key, 
    // then it lies in left subtree 
    if (key < root->key) 
        root->left = deleteNode(root->left, key); 
  
    // If the key to be deleted is greater than the root's key, 
    // then it lies in right subtree 
    else if (key > root->key) 
        root->right = deleteNode(root->right, key); 
  
    // if key is same as root's key, then This is the node 
    // to be deleted 
    else
    { 
        // node with only one child or no child 
        if (root->left == NULL) 
        { 
            struct node *temp = root->right; 
            free(root); 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
            struct node *temp = root->left; 
            free(root); 
            return temp; 
        } 
  
        // node with two children: Get the inorder successor (smallest 
        // in the right subtree) 
        struct node* temp = minValueNode(root->right); 
  
        // Copy the inorder successor's content to this node 
        root->key = temp->key; 
  
        // Delete the inorder successor 
        root->right = deleteNode(root->right, temp->key); 
    } 
    return root; 
} 

int search_value(struct node* root, int key,int val) 
{ 
    // Base Cases: root is null or key is present at root 
    if (root == NULL || root->key == key) 
       return val; 
     
    // Key is greater than root's key 
    if (root->key < key) 
       return search_value(root->right, key,val*2+1); 
  
    // Key is smaller than root's key 
    return search_value(root->left, key,val*2); 
} 

int main()
{
	int q;
	char ch;
	long long int num;
	cin>>q;
	struct node* root=NULL;
	while(q>0)
	{
		cin>>ch>>num;
		if(ch=='i')
		{
			root=insert(root,num);
			cout<<search_value(root,num,1)<<endl;
		}
		else if(ch=='d')
		{
			cout<<search_value(root,num,1)<<endl;
			deleteNode(root,num);
		}
		q--;
	}
}