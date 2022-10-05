/*
Given an array of n words. Some words are repeated twice, we need count such words.

Input:
The first line of input contains an integer T denoting the number of test cases. 
Then T test cases follow. Each test case contains an integer n denoting the number 
of words in the string. The next line contains n space separated words forming the string.

Output:
Print the count of the words which are repeated twice in the string.

Constraints:
1<=T<=105  
1<=no of words<=105
1<=length of each word<=105

Example:
Input:
2
10
hate love peace love peace hate love peace love peace
8
Tom Jerry Thomas Tom Jerry Courage Tom Courage

Output:
1
2
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n;
	map<string,int> freq;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            freq[s]++;
            if(freq[s]==2)
            {
                ans++;
            }
            if(freq[s]==3)
            {
                ans--;
            }
        }
        cout<<ans<<endl;
        t--;
    }
	return 0;
}