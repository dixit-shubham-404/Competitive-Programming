/*
Chef has N items in his shop (numbered 1 through N); for each valid i, the price of the i-th item is Pi. 
Since Chef has very loyal customers, all N items are guaranteed to be sold regardless of their price.

However, the government introduced a price ceiling K, which means that for each item i such that Pi>K, its price should be reduced from Pi to K.

Chef's revenue is the sum of prices of all the items he sells. Find the amount of revenue which Chef loses because of this price ceiling.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and K.
The second line contains N space-separated integers P1,P2,…,PN.
Output
For each test case, print a single line containing one integer ― the amount of lost revenue.

Constraints
1≤T≤100
1≤N≤10,000
1≤Pi≤1,000 for each valid i
1≤K≤1,000
*/

#include<iostream>
using namespace std;
int main()
{
	int t;
	long long int n,k,sum,temp;
	cin>>t;
	while(t>0)
	{
		cin>>n>>k;
		sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			if(temp>k)
			{
				sum=sum+temp-k;
			}
		}
		cout<<sum<<endl;
		t--;
	}
}