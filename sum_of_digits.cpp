/*
You're given an integer N. Write a program to calculate the sum of all the digits of N.

INPUT
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

OUTPUT
Calculate the sum of digits of N.

CONSTRAINTS
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
*/

#include<iostream>
using namespace std;
int main()
{
	int t,n,sum=0;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		sum=0;
		while(n>0)
		{
			sum=sum+(n%10);
			n/=10;
		}
		cout<<sum<<endl;
		t--;
	}
	return 0;
}