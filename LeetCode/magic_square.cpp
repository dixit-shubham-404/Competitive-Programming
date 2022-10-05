//Print magic square of size n

#include<bits/stdc++.h>
using namespace std;

void magicSquare(int n)
{
	int sum=(n*(n*n+1))/2;
	int i=n/2,j=n-1;
	int arr[n][n];
	memset(arr,0,sizeof(arr));
	
	for(int no=1;no<=n*n;)
	{
		
		if(i==-1 && j==n)
		{
			i=0;
			j=n-2;
		}
		else
		{
			
			if(j==n)
			{
				j=0;
			}
			
			if(i<0)
				i=n-1;
		}
		if(arr[i][j])
		{
			j-=2;
			i++;
			continue;
		}
		else
		{
			
			arr[i][j]=no;
			no++;
		}
		i--;j++;
		
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}


int main()
{
	int n;
	cin>>n;
	magicSquare(n);
}