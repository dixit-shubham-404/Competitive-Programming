/*
Having already mastered cooking, Chef has now decided to learn how to play the guitar. 
Often while trying to play a song, Chef has to skip several strings to reach the string 
he has to pluck. Eg. he may have to pluck the 1st string and then the 6th string. This is 
easy in guitars with only 6 strings; However, Chef is playing a guitar with 106 strings. 
In order to simplify his task, Chef wants you to write a program that will tell him the 
total number of strings he has to skip while playing his favourite song.

fig1

This is how guitar strings are numbered (In ascending order from right to left). Eg. to 
switch from string 1 to 6, Chef would have to skip 4 strings (2,3,4,5).

Input:
First line will contain T, number of testcases. Then the testcases follow.
The first line of each test case contains N, the number of times Chef has to pluck a string
The second line of each test case contains N space separated integers - S1, S2, …, SN, 
where Si is the number of the ith string Chef has to pluck.
Output:
For each testcase, output the total number of strings Chef has to skip over while playing his favourite song.

Constraints
1≤T≤10
2≤N≤105
1≤Si≤106
For each valid i, Si≠Si+1
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long long int n,sum,prev,now;
	while(t>0)
	{
		cin>>n;
		sum=0;
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				cin>>now;
				prev=now;
			}
			else
			{
				cin>>now;
				if(prev!=now)
				{
				sum=sum+abs(prev-now)-1;
				}
				prev=now;
			}
		}
		cout<<sum<<endl;
		t--;
	}
}