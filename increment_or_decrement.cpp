/*
Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.

Input:
First line will contain a number N.
Output:
Output a single line, the new value of the number.

Constraints
0≤N≤1000
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%4==0)
		n++;
	else
		n--;
	cout<<n;
}