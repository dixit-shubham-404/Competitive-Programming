/*
If Give an integer N . Write a program to obtain the sum of the first and last digit of this number.

INPUT
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains an integer N.

OUTPUT
Display the sum of first and last digit of N.

CONSTRAINTS
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
*/

#include<iostream>
using namespace std;
int main()
{
	int t,n,first,last;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		last=n%10;
		while(n>0)
		{
			first=n%10;
			n/=10;
		}
		t--;
		cout<<first+last<<endl;
	}
}