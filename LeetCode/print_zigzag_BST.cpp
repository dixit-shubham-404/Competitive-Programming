//print BST in zigzag manner

#include<bits/stdc++.h>
using namespace std;
void printZigZag(struct Node* root)
{
	stack<struct Node*> current;
	stack<struct Node*> next;
	bool ltr=true;
	current.push(root);
	while(current.size()!=0)
	{
		while(current.size()!=0)
		{
			Node *temp=current.top();
			current.pop();
			cout<<current->data<<" ";
		if(ltr)
		{
				if(temp->left!=NULL)
				next.push(temp->left);
				if(temp->right!=NULL)
					next.push(temp->right);
				
		}
		else
		{
			if(temp->right!=NULL)
				next.push(temp->right);
			if(temp->left!=NULL)
				next.push(temp->left);
			
		}
		}
		swapt(current,swap);
		ltr=!ltr;
	}
}