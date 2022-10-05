/*
There are N students standing in a row and numbered 1 through N from left to right. 
You are given a string S with length N, where for each valid i, the i-th character of S is 'x' 
if the i-th student is a girl or 'y' if this student is a boy. Students standing next to each other in the row are friends.

The students are asked to form pairs for a dance competition. Each pair must consist of a boy and a girl. 
Two students can only form a pair if they are friends. Each student can only be part of at most one pair. 
What is the maximum number of pairs that can be formed?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single string S.
Output
For each test case, print a single line containing one integer ― the maximum number of pairs.

Constraints
1≤T≤100
1≤N≤105
|S|=N
S contains only characters 'x' and 'y'
the sum of N over all test cases does not exceed 3.10^5
*/

#include<iostream>
using namespace std;
int main()
{
	int t,n,no_pairs,last;
	cin>>t;
	while(t>0)
	{
		
		string s;
		cin>>s;
		no_pairs=0;
		n=s.size();
		last=0;
		for(int i=0;i<n-1;i++)
		{
			if(last&&(s[i-1]!=s[i]))
			{
				
				
					no_pairs++;
					last=0;
				
			}
			else if(s[i]!=s[i+1])
			{
				no_pairs++;
				last=0;
				i++;
			}
			else
			{
				last=1;
			}
		}
		cout<<no_pairs<<endl;
		t--;
	}
}