/*
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Input:
The first line contains 'T' denoting the number of testcases. Then follows description of testcases. 
The next T lines contains a single integer N denoting the value of N.


Output:
Output the sum of all its digit until the result has only one digit.


Constraints:
1<=T<=30
1<=n<=10^9


Example:
Input :
2
1
98


Output :
1
8
*/


#include <iostream>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	while(t>0)
	{
	    cin>>n;
	    again:
	    int sum=0;
	    while(n>0)
	    {
	        sum+=(n%10);
	        n=n/10;
	    }
	    if(sum/10>0)
	    {
	        n=sum;
	        goto again;
	    }
	    else
	    {
	        cout<<sum<<endl;
	    }
	    t--;
	}
	return 0;
}