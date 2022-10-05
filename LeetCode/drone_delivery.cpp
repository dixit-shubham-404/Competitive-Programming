/*
As lockdown is going on so no is allowed to go outside , so Chef has come with an 
innovative idea for food home delivery using drone. But there is an issue with it , 
the drone can move forward or backward a fix number of steps x .

All the houses and chef restaurant are all in a straight line . Homes which need 
delivery are located at H[i] and chef is located at y coordinate .

If Drone is at a location R, then it can move to R−x or R+x .

Help chef find maximum value of x to complete all the deliveries as he is busy managing the orders.

Input:
First line will contain n and R, number of houses that need delivery and the correct coordinate of chef (Drone).
Second line contains n integers , the coordinate of all homes that need delivery.
Output:
The maximum value of x , so that drone delivers to all houses.
Constraints
1≤n≤1000
1≤R≤109
1≤hi≤109
1≤x≤109
*/


#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long int HCF(long long int a,long long int b) 
{ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   
    // base case 
    if (a == b) 
        return a; 
   
    // a is greater 
    if (a > b) 
        return HCF(a-b, b); 
    return HCF(a, b-a); 
} 
int main()
{
	long long int n,r,result=0;
	cin>>n>>r;
	long long int arr[n+1];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	arr[n]=r;
	sort(arr,arr+n+1);
	int j=0;
	if(arr[j]==arr[j+1])
	{
	while(true)
	{
		if(arr[j]==arr[j+1])
			j++;
		else
			break;
			
	}
	}
	result=arr[j+1]-arr[j];
	for(int i=j+1;i<n;i++)
	{
		if(arr[i]!=arr[i+1])
		result=HCF(result,arr[i+1]-arr[i]);
	}
	cout<<result;
}