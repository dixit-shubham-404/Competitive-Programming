/*
Shaun is very much interested in Subarrays. Shaun wants to count the number of subarrays 
in his chosen array with sum being a multiple of 109. Since, Shaun is interested in huge 
numbers.He chose his array such that it contains only 108 and 9∗108 as its elements.

Help shaun to count the number of required subarrays.

Input:
First line will contain T, number of testcases. Then the testcases follow.
First line of each testcase contains one integer N,size of array A.
Second line of each testcase contains N space separated array elements
Output:
For each testcase, output in a single line number of subarrays with sum being multiple of 109.

Constraints
1≤T≤10
1≤N≤105
A[i]=108 , 9∗108
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long long int num;
	while(t>0)
	{
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>num;
			num=num/100000000;
			arr[i]=num;
		}
		int ans=0,sum=0;
		for(int i=0;i<n;i++)
		{
			sum=0;
			for(int j=i;j<n;j++)
			{
				sum+=arr[j];
				if(sum%10==0)
					ans++;
			}
		}
		cout<<ans;
		t--;
	}
	return 0;
}