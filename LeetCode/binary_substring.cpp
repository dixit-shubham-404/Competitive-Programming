/*
Given a binary string S. The task is to count the number of substrings that start and end with 1. 
For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.
*/
#include<bits/stdc++.h>
using namespace std;

long binarySubstring(string a){
    
    long n1=count(a.begin(),a.end(),'1');
    return (n1*(n1-1))/2;
    
}

int main()
{	
	string s;
	cin>>s;
	cout<<binarySubstring(s)<<endl;
}