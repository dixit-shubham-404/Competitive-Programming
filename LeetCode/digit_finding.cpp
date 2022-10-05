/*
Given a number ‘x’, and a range of ‘y’ to ‘z’. Find the count of all numbers ‘n’ in that range such 
that the product of the number ‘n’ and ‘x’ does not contain any digit from the number ‘n
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	long long int x=19,y=11,z=15,n,count=0;
	for(long long int i=y;i<=z;i++)
	{
		set<int> s;
		long long int j=i;
		while(j>0)
		{
			s.insert(j%10);
			j/=10;
		}
		n=x*i;
		int flag=0;
		while(n>0)
		{
			j=n%10;
			if(s.find(j)!=s.end())
			{
				flag++;
			}
			n/=10;
		}
		if(!flag)
		{
			count++;
			//cout<<"for no "<<i<<endl;
		}
	}
	
	cout<<count<<endl;
	return 0;
	
}