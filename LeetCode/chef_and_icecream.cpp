/*
Chef owns an icecream shop in Chefland named scoORZ. There are only three types of coins in Chefland: 
Rs. 5, Rs. 10 and Rs. 15. An icecream costs Rs. 5.

There are N people (numbered 1 through N) standing in a queue to buy icecream from scoORZ. Each person 

wants to buy exactly one icecream. For each valid i, the i-th person has one coin with value ai. 
It is only possible for someone to buy an icecream when Chef can give them back their change exactly ― for example, 
if someone pays with a Rs. 10 coin, Chef needs to have a Rs. 5 coin that he gives to this person as change.

Initially, Chef has no money. He wants to know if he can sell icecream to everyone in the queue, in the given order. 
Since he is busy eating his own icecream, can you tell him if he can serve all these people?

Input
The first line of the input contains a single integer T denoting the number of test cases. 
The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers a1,a2,…,aN.
Output
For each test case, print a single line containing the string "YES" if all people can be 
served or "NO" otherwise (without quotes).

Constraints
1≤T≤100
1≤N≤103
ai∈{5,10,15} for each valid i
*/

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n,n5,n10,flag,coin;
	while(t>0)
	{
		cin>>n;
		flag=0;
		n5=0;
		n10=0;
		for(int i=0;i<n;i++)
		{
			cin>>coin;
			if(!flag)
			{
				if(coin==5)
				{
					n5++;
				}
				else if(coin==10)
				{
					if(n5)
					{
						n5--;
						n10++;
					}
					else
						flag++;
				}
				else if(coin==15)
				{
					if(n10)
					{
						n10--;
					}
					else if(n5>=2)
					{
						n5-=2;
					}
					else
						flag++;
				}
			}
		}
		if(flag)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		t--;
	}
	return 0;
}