/*
Given a number N, find the number of binary strings of length N that contains consecutive 1's in them.
 

Input
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
The first line of each test case contains a positve integer N, denoting the length of the binary string.


Output
Print out the count of strings having consecutive 1's in them.
 

Constraints
1 <= T <= 200
2 <= N <=30



Examples 

Input
3
2
5
15

Output
1
19
31171
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
	    if(n==2)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        int a=2,b=3,c;
	        for(int i=3;i<=n;i++)
	        {
	            c=a+b;
	            a=b;
	            b=c;
	        }
	        cout<<int(pow(2,n)-c)<<endl;
	    }
	    t--;
	}
	return 0;
}