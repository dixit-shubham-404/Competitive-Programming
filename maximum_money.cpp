/*
Given street of houses (a row of houses), each house having some amount of money kept inside; 
now there is a thief who is going to steal this money but he has a constraint/rule that he 
cannot steal/rob two adjacent houses. Find the maximum money he can rob.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N and money.

Output:
Print maximum money he can rob.

Constraints:
1 ≤ T ≤ 100
1 ≤ money ≤ 100
1 ≤ N ≤ 1000

Example:
Input:
2
5 10
2 12

Output:
30
12
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n,m;
	cin>>t;
	while(t>0)
	{
	    cin>>n>>m;
	    cout<<m*ceil(n/2.0)<<endl;;
	    t--;
	}
	return 0;
}