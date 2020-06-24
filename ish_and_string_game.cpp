/*
Ish and Govi are playing with strings. In this game Ish gives Govi two strings, a and b. 
Govi has to modify the string a, such that it doesnot contain any character from string b. 
Govi has to go to meet Omi. Help Govi to modify the string a.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains two lines representing string a and b respectively.
Output:
For each testcase, output in a single line answer, the modified string a such that it doesnot contain any character from string b.

Constraints
1≤T≤100
1≤a≤105
1≤b≤105
Both string are of Uppercase English Alphabets
*/

#include<iostream>
using namespace std;

int check(char ch,string s)
{
	for(int i=0;i<s.size();i++)
	{
		if(ch==s[i])
			return 0;
	}
	return 1;
}

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string s1,s2;
		cin>>s1;
		cin>>s2;
		for(int i=0;i<s1.size();i++)
		{
			if(check(s1[i],s2))
			{
				cout<<s1[i];
			}
		}
		cout<<endl;
		t--;
	}
	return 0;
}
