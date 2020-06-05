#include <bits/stdc++.h> 
using namespace std; 
#include<bits/stdc++.h>
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	ll x;
	while(t--)
	{
	    cin>>x;
	    ll num=1,sum=1,flg=1;
	    while(1)
	    {
	        num=num*2;
	        //cout<<"num="<<num<<endl;
	        if(num==x)
	        {flg=0;break;}
	        
	        if((num-1)%3==0&&abs((num-1)/3))
	            { flg=0;break;}
	    }
	    if(flg==0)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}