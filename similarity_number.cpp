/*
Chef switched from array to an string and decided to find out the similarities of the strings. 
The similarity of two strings is defined as the longest prefix common to both of the stings and 
the similarity number of the string is the sum of all such cases.

Example:

S = aaa, S1 = aaab

So S and S1 has 3 as aaa is longest prefix common to both.

Input Format
The first line contains the number of test cases t. Each of the next t lines contains a string 
to process, S with alphabets [a-z].

Output Format
For each test case print similarity number of each string.

Constraints
1 <= t <= 10

1 <= |S| <= 100000
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,length,result;
	string s;
	cin>>t;
	while(t>0)
	{
		cin>>s;
		length=s.size();
		result=0;
		for(int i=0;i<length;i++)
		{
			string sub_str=s.sub_str(i,length-1);
			for(int j=0;j<sub_str.size;j++)
			{
				if(sub_str[j]==s[j])
					result++;
				else
					break;
			}
		}
		cout<<result<<endl;
		t--;
	}
	return 0;
}