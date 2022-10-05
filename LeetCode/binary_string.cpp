//Given length n, print all possible binary strings of length n

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n)
{
	for(int i=n-1;i>=0;i--)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int it=pow(2,n)-1;
	for(int i=0;i<=it;i++)
	{
		memset(arr,0,sizeof(arr));
		int temp=i,j=0;
		while(temp>0)
		{
			arr[j]=temp%2;
			temp/=2;
			j++;
		}
		printArray(arr,n);
	}
}