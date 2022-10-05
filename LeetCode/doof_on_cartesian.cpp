/*
You may have helped Chef and prevented Doof from destroying the even numbers. 
But, it has only angered Dr Doof even further. However, for his next plan, 
he needs some time. Therefore, Doof has built N walls to prevent Chef from 
interrupting him. You have to help Chef by telling him the number of walls he needs to destroy in order to reach Dr Doof.

Formally, the whole area can be represented as the first quadrant with the 
origin at the bottom-left corner. Dr. Doof is located at the origin (0,0). 
There are N walls, the i-th wall is a straight line segment joining the points 
(ai,0) and (0,ai). For every initial position of Chef (xj,yj), find the number 
of walls he needs to break before reaching Doof. Obviously, chef can't start from 
a point on the wall. Therefore, if (xj,yj) lies on any of the given walls, print −1 in a new line.

Input
First line contains T, denoting the number of testcases.
The first line of every test case contains a single integer N denoting the number of walls Dr Doof has built.
The next line contains N space separated distinct integers each denoting ai.
The next line contains a single integer Q denoting the number of times Chef asks for your help.
The next Q lines contains two space separated integers xj and yj, each denoting the co-ordinates of the starting point of Chef.
Output
For each query, print the number of walls Chef needs to break in order to reach 
Dr Doof in a separate line. If Chef tries to start from a point on any of the walls, print −1.

Constraints
1≤T≤2∗102
1≤N,Q≤2∗105
1≤ai≤109
0≤xj,yj≤109
a1<a2<a3<....<aN
Sum of N and Q over all testcases for a particular test file does not exceed 2∗105
*/

#include<iostream>
using namespace std;

int search(long long int arr[],int n,int key)
{
	int mid=(n-1)/2,l=0,h=n-1;
	
	while(l<=h)
	{
		//cout<<"mid="<<mid<<" l="<<l<<" h="<<h<<endl;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
		mid=(l+h)/2;
	}
	if(l==n)
	{
		mid=n;
	}
	else if(h==-1)
	{
		mid=0;
	}
	else if(h<l)
	{
		h++;
		mid=(h+l)/2;
	}
	return mid;
	
}
int main()
{
	int t,n,q;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		long long int x,y,arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cin>>q;
		for(int i=0;i<q;i++)
		{
			cin>>x>>y;
			//cout<<"Returned="<<search(arr,n,x+y)<<endl;
			int pos=search(arr,n,x+y);
			if(arr[pos]!=x+y)
			{
				
					cout<<pos<<endl;
				
			}
			else
			{
				cout<<-1<<endl;
			}
		}
		t--;
	}
}