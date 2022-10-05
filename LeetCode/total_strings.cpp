/*
Given 3 characters a, b, c. Find the number of strings of length n that can be formed from 
these 3 characters. Given that : we can use ‘a’ as many times as we want, ‘b’ maximum once, and ‘c’ maximum twice.

Input:
The first line of input contains an integer T denoting the number of test cases. 
The first and last line of each test case consists of an integer n. 

Output:
Print the total number of string that can be formed.

Constraints: 
1<=T<=20
1<=N<=20

Example:
Input:
2
3
5

Output:
19
71 
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
	    int no=1;
	    if(n>=3)
	    {
	        //for one b
	        no+=n;
	        //for one c
	        no+=n;
	        //for two c
	        no+=((n*(n-1))/2);
	        //for one c and one b
	        no+=(n*(n-1));
	        //for two c and one b;
	        int temp=(n*(n-1)*(n-2))/6;
	        temp=temp*3;
	        no+=temp;
	        
	    }
	    else if(n==1)
	    {
	        no=3;
	    }
	    else if(n==2)
	    {
	        no=8;
	    }
	    cout<<no<<endl;
	    t--;
	}
	return 0;
}