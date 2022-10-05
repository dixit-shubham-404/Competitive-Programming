/*
Chef Vivek is good in mathematics and likes solving problems on prime numbers. 
One day his friend Jatin told him about Victory numbers. Victory number can be 
defined as a number formed after summing up all the prime numbers till given number n. 
Now, chef Vivek who is very fond of solving questions on prime numbers got busy in 
some other tasks. Your task is to help him finding victory number.

Input:
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input N till which sum of all prime numbers between 1 to n has to be calculated.
Output:
For each test case, output in a single line answer to the victory number.

Constraints
1<=T<=1000
1<=N<=106
*/

#include<bits/stdc++.h>
using namespace std;

long long int sumOfPrimes(int n)
{
	bool prime[n+1];
	memset(prime,true,n+1);
	
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i]==true)
		{
			for(int j=i*2;j<=n;j+=i)
				prime[j]=false;
		}
	}
	
	
	long long int sum=0;
	for(int i=2;i<=n;i++)
	{
		if(prime[i])
			sum+=i;
	}
	return sum;
}

int main()
{
	int t;
	cin>>t;
	long long int n,sum;
	while(t>0)
	{
		cin>>n;
		sum=sumOfPrimes(n);
		cout<<sum<<endl;
		t--;
	}
	return 0;
}