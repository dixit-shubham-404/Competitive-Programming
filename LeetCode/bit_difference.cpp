/*
You are given two numbers A and B. Write a program to count number of bits needed to be flipped to convert A to B.

Input:
The first line of input contains an integer T denoting the number of test cases. 
T testcases follow. The first line of each test case is A and B separated by a space.

Output:
For each testcase, in a new line, print the number of bits needed to be flipped.

Constraints:
1 ≤ T ≤ 100
1 ≤ A, B ≤ 103

Example:
Input:
1
10 20
Output:
4

Explanation:
Testcase1:
A  = 01010
B  = 10100
Number of bits need to flipped = 4
*/

#include <iostream>
using namespace std;
int number_of_one(int n)
{
    int ret=0;
    while(n>0)
    {
        if(n%2==1)
        {
            ret++;
        }
        n=n/2;
    }
    return ret;
}
int main() {
	//code
	int t,a,b,n_or,n_and,n_a,n_b;
	cin>>t;
	while(t>0)
	{
	    cin>>a>>b;
	    n_a=number_of_one(a);
	    n_b=number_of_one(b);
	    n_and=number_of_one(a&b);
	    cout<<n_a-n_and+n_b-n_and<<endl;
	    t--;
	}
	return 0;
}