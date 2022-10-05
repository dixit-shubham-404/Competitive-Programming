/*
This is a peculiar functioning setup.

Two Tanks are separated from each other by a wall .There is a pipe in the wall which connects 
both tanks which allows flow of water between them . Due to this ,there is change in temperature o
f both tanks , every minute temperature of Tank with larger temperature among two decreases by one 
and temperature of Tank with smaller temperature among two increases by two until equilibrium is reached , But there is a problem .

The pipe can't control this flow of water if there is Non-equilibrium (inequality of temperature on both sides ) 
even after m minutes and the pipe will burst after it , your task is to predict whether the pipe will burst or not .

Note: If equilibrium cannot be reached the process will continue forever.

The initial temperature of Cold Tank is Tc , of Hot Tank it is Th.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, three integers m,Tc,Th.
Output:
For each testcase, output in a single line answer "Yes" if Pipe will burst after m minutes "No" if pipe will not burst.

Constraints
1≤T≤100000
1≤m,Tc,Th≤109
Tc≤Th
*/
#include<iostream>
using namespace std;
int main()
{
	int t,flag;
	long long int m,tc,th,temp;
	cin>>t;
	while(t>0)
	{
		flag=0;
		cin>>m>>tc>>th;
		if((th-tc)%3==0)
		{
			
			if((th-tc)/3<=m)
			{
				flag++;
			}
		}
		if(flag)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		t--;
	}
	return 0;
}