//Given n, write recursive code to print fibonacci series upto n

#include<bits/stdc++.h>
using namespace std;

void fib(int a,int b,int n)
{
	if(a+b<=n)
	{
		cout<<a+b<<" ";
		fib(b,a+b,n);
	}
}

int main()
{
	int n;
	cin>>n;
	cout<<"0 1 ";
	fib(0,1,n);
}
