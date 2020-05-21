/*
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. 
A triangle is valid if the sum of all the three angles is equal to 180 degrees.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three angles 
A, B and C of triangle separated by space.

Output
Display 'YES' or 'NO' if the triangle is Valid or not respectively.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B,C ≤ 180
*/
#include<iostream>
using namespace std;
int main()
{
	int t,angle[3];
	cin>>t;
	while(t>0)
	{
		for(int i=0;i<3;i++)
			cin>>angle[i];
		if((angle[0]+angle[2]+angle[1])==180)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		t--;
	}
}