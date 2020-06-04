#include<iostream>
using namespace std;

int main()
{
	int t,n,p;
	char s,l;
	cin>>t;
	while(t>0)
	{
		cin>>n>>p;
		cin>>s>>l;
		if(s=='L')
		{
			if(l=='H')
			{
				if(p%2==0)
					cout<<p<<" E"<<endl;
				else
				{
					cout<<p<<" H"<<endl;
				}
			}
			else
			{
				if(p%2==0)
					cout<<p<<" H"<<endl;
				else
					cout<<p<<" E"<<endl;
			}
		}
		else
		{
			p=n-p+1;
			if(l=='H')
			{
				if(p%2==0)
					cout<<p<<" E"<<endl;
				else
					cout<<p<<" H"<<endl;
			}
			else
			{
				if(p%2==0)
					cout<<p<<" H"<<endl;
				else
					cout<<p<<" E"<<endl;
					
			}
		}
				
		t--;
	}
	return 0;
}
