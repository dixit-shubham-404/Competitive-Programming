/*
One day while visiting an unknown place, Chef found the person playing with logic and 
found it interesting. Chef also join the game and now the person gave him an integer N 
and ask him to build a logic. Now as Chef is new to logic, help him to find a better logic.

In other words, find the logic between Input and Output.

Input Format
The first line contains the number of test cases t. Each of the next t lines contains an integer N.

Output Format
For each test case print the required output.

Constraints
1 <= t <= 10

1 <= N <= 10000
*/
#include<cmath>
#include<iostream>
using namespace std;

int main()
{
	long int t,n,b;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		if(n%2==0)
			b=n/2;
		else
			b=(n/2)+1;
		b=b*n;
		cout<<b<<endl;
		t--;
	}
}

/*
LOGIC
series = n*(n)-n*(n-1)+n*(n-2)-n*(n-3)...................
*/