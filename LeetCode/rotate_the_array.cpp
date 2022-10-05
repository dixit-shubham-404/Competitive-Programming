/*
A Right rotation operation on an array of size n , shifts each of the array's elements 
1 unit to the Right. For example, if 2 Right rotations are performed on array [1,2,3,4,5] 
then the array would become [4,5,1,2,3]. Given an array of n integers and a number d , 
perform d Right rotations on the array. Then print the updated array as a single line of space-separated integers.

Input:
First line will contain T, number of testcases. Then the T testcases follow.
In each test case, The first line contains two space-separated integers denoting the 
respective values of n (the number of integers) and d (the number of rightrotations you must perform). 
The second line contains n space-separated integers describing the respective elements of the array.
Output:
For each test case print a single line of space-separated integers denoting the final state 
of the array after performing right rotations.

Constraints
1≤T≤10
1≤n≤105
1≤d≤n
1≤a[i]≤106
*/

#include<iostream>
using namespace std;
int main()
{
	int t,n,d,next;
	cin>>t;
	while(t>0)
	{
		cin>>n>>d;
		int arr[n];int temp[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			next=(i+d)%n;
			temp[next]=arr[i];
		}
		for(int i=0;i<n;i++)
			cout<<temp[i]<<" ";
		t--;
	}
}