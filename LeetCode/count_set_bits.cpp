/*
You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. The first line of each test case is N.

Output:
For each testcase, in a new line, print the total count of all bits.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 103

Example:
Input:
2
4
17
Output:
5
35
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	while(t>0)
	{
	    cin>>n;
	    int count=0;
	    for(int i=1;i<=n;i++)
	    {
	        count+=__builtin_popcount(i);
	    }
	    cout<<count<<endl;
	    t--;
	}
	return 0;
}