/*
A man is travelling from city A to city B. He starts with X amount of money. 
Everyday he spends some money and also he may work on some days to earn money. 
He may earn more than he spends on same day or he may spend more than what he earn on same day. 
You are given an array of integers which represent his net savings (earning-expense), 
find minimum amount of money he should begin with to ensure that he always have some money (>0) at the end of any day
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int net_sav,current_savings=0;;
	int min_amt=0;
	for(int i=0;i<n;i++)
	{
		cin>>net_sav;
		current_savings+=net_sav;
		if(current_savings<min_amt)
			min_amt=current_savings;
	}
	cout<<abs(min_amt)+1;
}