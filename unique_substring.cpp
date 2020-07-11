/*
Teddy and Freddy are two friends. Teddy has a pile of strings of size N. 
Each string Si in the pile has length less or equal to 100 (len(Si)≤100). 
Teddy and Freddy like playing with strings. Teddy gives Freddy a string B of size M.

Teddy and Freddy like playing with strings. Teddy gives Freddy a string B of size M.

He asks Freddy to find the count of the unique substrings of B present in pile of strings of size N.

Freddy is busy with the some task, so he asks for your help.Help Freddy by giving 
the unique substrings of B present in pile of strings of size N.

Note: The substrings having same permutation of characters are considered same.

Input:
First line will contain N, number of strings. Then the strings follow.
Next N lines will contain a string
N+2 line contains the M - length of string B
Following line contains the string B
Output:
For each testcase, output in a single line number of unique strings of B.

Constraints
1≤N≤100
2≤len(Si)≤100
2≤M≤100
*/

#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s[n],s1;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	int b;
	cin>>b;
	cin>>s1;
	int count =0;
	set<string> sub_str;
	
	
	for(int i=0;i<b;i++)
	{
		for(int j=1;i+j<=b;j++)
		{
			sub_str.insert(s1.substr(i,j));
		}
	}
	for(auto sub:sub_str)
	{
		for(int i=0;i<n;i++)
		{
			if(s[i]==sub)
				count++;
		}
	}
	cout<<count;
	return 0;
}