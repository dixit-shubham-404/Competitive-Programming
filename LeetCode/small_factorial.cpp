/*
Write a program to find the factorial value of any number entered by the user.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
Display the factorial of the given number N .

Constraints
1 ≤ T ≤ 1000
0 ≤ N ≤ 20
*/

#include<iostream>
using namespace std;
int main()
{
	int t,n,result;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		result=1;
		while(n>1)
		{
			result*=n;
			n--;
		}
		cout<<result<<endl;
		t--;
	}
}