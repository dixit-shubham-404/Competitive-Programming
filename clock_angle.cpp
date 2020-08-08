#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int h=((s[0]-48)*10)+(s[1]-48);
	int m=((s[3]-48)*10)+(s[4]-48);
	if(h>=12)
		h-=12;
		
	
	int h_angle,m_angle;
	h_angle=(h*60+m)*0.5;
	m_angle=m*6;
	int angle=abs(h_angle-m_angle);
	if(angle>360-angle)
		cout<<360-angle;
	else
		cout<<angle;
}