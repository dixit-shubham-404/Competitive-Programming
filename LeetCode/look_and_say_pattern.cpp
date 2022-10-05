/*
Given a pattern as below and an integer n your task is to decode it and print nth row of it. The pattern follows as :
1
11
21
1211
111221
............

Input:
The first line of input is the number of test cases .  Then T test cases follow . The first line of each test case is an integer N.

Output:
For each test case print the required nth row of the pattern.

Expected Time Complexity : O(N2)
Expected Auxilliary Space : O(1)

Constraints:
1<=T<=20
1<=N<=20

Example:
Input:
2
2
3
Output:
11
21

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string find(string s)
{
    string ret;
    int i=0,cur,count;
    while(i<s.size())
    {
        cur=s[i]-'0';
        count=1;
        i++;
        if(s[i]-'0'==cur)
        {
            i++;
            count++;
        }
        ret.push_back('0'+count);
        ret.push_back('0'+cur);
    }
    return ret;
}

int main()
{
    vector<string> ans;
    ans.push_back("1");
    for(int i=1;i<20;i++)
    {
        string s=find(ans[i-1]);
        ans.push_back(s);
    }
    int t,n;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        cout<<ans[n-1]<<endl;
        t--;
    }
}