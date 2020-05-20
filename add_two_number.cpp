/*
Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.
Program is very simple, Given two integers A and B, write a program to add these two numbers.
INPUT
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains two Integers A and B.
OUTPUT
Add A and B and display it.
CONSTRAINTS
-> 1≤T≤1000
-> 1≤A,B≤10000
*/

#include<iostream>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t>0)
	{
		cin>>a>>b;
		cout<<a+b<<endl;
		t--;
	}
	return 0;
}