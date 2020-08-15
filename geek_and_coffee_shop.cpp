/*
Geek love's to drink cold coffee after coding for long hour's. One fine day Geek went to 
his favourite coffee shop in the town and asked for a cup of cold coffee. The shopkeeper 
told him that he is their lucky customer and had an offer for the Geek. The offer was that 
for an amount of N they will fill Geek's cup with N units of cold coffee, the offer doesn't 
over yet. After consuming initial N units of coffee the shopkeeper will again refill his cup 
with half the amount of coffee that Geek consumed in previous refill, and will keep on 
refilling his cup till the amount to refill becomes nil i.e. 0 (Assume Geek can consume 
infinite amount of coffee and shop also has infinite amount coffee). Now Geek is curious 
to know that how many units of coffee will Geek get for Mth refill. Being Geek's friend 
help him out with his problem.    

Input:
The first line of the input contains an integer T, denoting the number of test cases. 
The T test case follow. The only line of each test case contains two space separated integers N and M respectively.

Output:
For each test case output a single integer on a new line denoting the required answer.

Constraints:
1<=T<=104
1<=N<=109
1<=M<=103

Example:
Input:
2
100 4
10 3

Output:
12
2
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	long long int n,m;
	cin>>t;
	while(t>0)
	{
	    cin>>n>>m;
	    m=pow(2,m-1);
	    cout<<n/m<<endl;
	    t--;
	}
	return 0;
}