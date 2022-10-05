/*
Count the number of 2s as digit in all numbers from 0 to n.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains the input integer n.

Output:
Print the count of the number of 2s as digit in all numbers from 0 to n.

Constraints:
1<=T<=100
1<=N<=10^5

Example:
Input:
2
22
100

Output:
6
20
*/

#include<bits/stdc++.h>
using namespace std;

int numberOf2sAtDigit(int number,int d)
{
	int p10=pow(10,d);
	int np10=p10*10;
	int right=(number%p10);
	int digit=(number/p10)%10;
	int rd=number-number%np10;
	int ru=rd+p10;
	if(digit<2)
		return rd/10;
	if(digit==2)
		return rd/10+right+1;
	return ru/10;
}

int numberOf2s(int n)
{
	stringstream convert;
	convert<<n;
	string s=convert.str();
	int count=0;
	for(int d=0;d<s.length();d++)
	{
		count+=numberOf2sAtDigit(n,d);
	}
	return count;
}

int main()
{
	int t,n;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		cout<<numberOf2s(n)<<endl;
		t--;
	}
	return 0;
}