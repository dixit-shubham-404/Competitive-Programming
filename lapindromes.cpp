#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main() 
{
       fast;
	int t;
	cin>>t;
	while(t--)
	{
	        string s;
	        cin>>s;
	        int len = s.length(),b=0;
	        int arr[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	        int arr1[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},flag=0;
	        if(len%2==0) 
	        {
	               //cout<<"pehla\n";
	               while(b<=(len/2)-1)
	               {
	                     arr[s[b]-'a']++;
	                     b++;
	               }
	               //b++;
	               while(b<len)
	               {
	                      arr1[s[b]-'a']++;
	                      b++;
	               }
	        }
	        else
	        {
	               //cout<<"dusra\n";
	               while(b<(len/2))
	               {
	                     arr[s[b]-'a']++;
	                     b++;
	               }
	               b++;
	               while(b<len)
	               {
	                      arr1[s[b]-'a']++;
	                      b++;
	               }
	        }
	        for(int i=0;i<26;i++)
	        {
	               if(arr[i]!=arr1[i]) {flag=1;break;}
	        }
	        if(flag==0)  cout<<"YES\n";
	        else  cout<<"NO\n";
	}
	return 0;
}
