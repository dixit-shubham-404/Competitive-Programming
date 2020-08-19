/*
Implement pow(A, B) % C.

In other words, given A, B and C, find (AB)%C.

 

Input:

The first line of input consists number of the test cases.

 The following T lines consist of 3 numbers each separated by a space and in the following order:

A B C

'A' being the base number, 'B' the exponent (power to the base number) and 'C' the modular.

 

Output:

In each separate line print the modular exponent of the given numbers in the test case.


Constraints:

1 ≤ T ≤ 70

1 ≤ A ≤ 10^5

1 ≤ B ≤ 10^5

1 ≤ C ≤ 10^5


Example:

Input:

3
3 2 4
10 9 6
450 768 517

Output:

1
4
34
*/

#include <iostream>
using namespace std;

long long int calculate(long long int a,long long int b,long long int c)
{
    if(b==0)
    {
        return 1;
    }
    return (a*calculate(a,b-1,c))%c;//%c is divide and conquer
}

int main() {
	//code
	long long int a,b,c,t;
	cin>>t;
	while(t>0)
	{
	    cin>>a>>b>>c;
	    cout<<calculate(a,b,c)<<endl;
	    t--;
	}
	return 0;
}