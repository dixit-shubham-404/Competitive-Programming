/*
You are given a string S with length N. You may perform the following operation any number of times: 
choose a non-empty substring of S (possibly the whole string S) such that each character occurs an 
even number of times in this substring and erase this substring from S. (The parts of S before and 
after the erased substring are concatenated and the next operation is performed on this shorter string.)

For example, from the string "acabbad", we can erase the highlighted substring "abba", since each 
character occurs an even number of times in this substring. After this operation, the remaining string is "acd".

Is it possible to erase the whole string using one or more operations?

Note: A string B is a substring of a string A if B can be obtained from A by deleting several 
(possibly none or all) characters from the beginning and several (possibly none or all) characters from the end.

Input
The first line of the input contains a single integer T denoting the number of test cases. 
The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains a single string S with length N.
Output
For each test case, print a single line containing the string "YES" if it is possible to 
erase the whole string or "NO" otherwise (without quotes).

Constraints
1≤T≤200
1≤N≤1,000
S contains only lowercase English letters
Example Input
4
6
cabbac
7
acabbad
18
fbedfcbdaebaaceeba
21
yourcrushlovesyouback
Example Output
YES
NO
YES
NO
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		string s;
		cin>>s;
		int count[26];
		memset(count,0,sizeof(count));
		//cin>>s;
		for(int i=0;i<n;i++)
			count[s[i]-'a']++;
		int flag=0;
		//for(int i=0;i<26;i++)
		//	cout<<"i= "<<i<<" count="<<count[i]<<endl;
		for(int i=0;i<26;i++)
		{
			//cout<<"Checking for count at "<<i<<" is "<<count[i]<<endl;
			if(count[i]%2!=0)
			{
				//cout<<"Inside if for i="<<i<<" value is "<<count[i]<<endl;
				flag++;
			}
		}
		if(!flag)
			cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		t--;
	}
}