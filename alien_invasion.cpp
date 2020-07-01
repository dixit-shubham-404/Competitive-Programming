/*
Colonel America needs your help to protect his country against the alien invasion which, as usual, is targeting Los Angeles.

The password to the mainframe of the alien mothership is the sum of the first N digits 
after the decimal point in the decimal representation of the number P/Q.

As Colonel is busy fighting off the aliens to clear a path to the mothership for you, 
the responsibility of finding the password and shutting down down the mothership falls upon your shoulders.

GO!!
America needs you!!!

Input:
First line will contains a single integer T denoting the number of testcases. Then the testcases follow.
The first line of each testcase contains a single integer N denoting the number of digits 
after the decimal point of which you have to find the sum of.
The second line of each testcase contains two space-separated integers P,Q.
Output:
For each testcase, output in a single line, the sum of the first N digits after the decimal 
point in the decimal representation of the number P/Q .

Constraints
1≤T≤1000
1≤N≤1000
1≤P,Q≤106

*/

#include<iostream>
using namespace std;

int main()
{
	int t,n;
	long long int p,q,t1,t2,sum;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		cin>>p>>q;
		sum=0;
		t1=p%q;
		for(int i=0;i<n;i++)
		{
			t1*=10;
			sum+=(t1/q);
			t1=t1%q;
		}
		cout<<sum<<endl;
		t--;
	}
	return 0;
}