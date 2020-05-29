/*
In Chefland, types of ingredients are represented by integers and recipes are represented by sequences 
of ingredients that are used when cooking. One day, Chef found a recipe represented by a sequence A1,A2,…,AN 
at his front door and he is wondering if this recipe was prepared by him.

Chef is a very picky person. He uses one ingredient jar for each type of ingredient and when he stops using 

a jar, he does not want to use it again later while preparing the same recipe, so ingredients of each type 
(which is used in his recipe) always appear as a contiguous subsequence. Chef is innovative, too, so he makes 
sure that in each of his recipes, the quantity of each ingredient (i.e. the number of occurrences of this type 
of ingredient) is unique ― distinct from the quantities of all other ingredients.

Determine whether Chef could have prepared the given recipe.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.
Output
For each test case, print a single line containing the string "YES" if the recipe could have been prepared by Chef or "NO" otherwise (without quotes).

Constraints
1≤T≤100
1≤N≤103
1≤Ai≤103 for each valid i
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int it=-1;

int check(int var,int count[][2])
{
	for(int i=0;i<it;i++)
	{
		if(var==count[i][0])
			return 1;
	}
	return 0;
}

int check_seq(int arr[],int n,int count[][2])
{
	
	for(int i=0;i<n;i++)
	{
		if(check(arr[i],count)&&count[it][0]!=arr[i])
			return 0;
		else if(count[it][0]==arr[i])
		{
			count[it][1]++;
			
		}
		else
		{
			it++;
			count[it][0]=arr[i];
			count[it][1]++;
			
		}
	}
	return 1;
}

int check_unique(int count[][2])
{
	int arr1[it+1];
	for(int i=0;i<=it;i++)
	{
		arr1[i]=count[i][1];
	}
	sort(arr1,arr1+it+1);
	//cout<<"After sorting"<<endl;
	//for(int i=0;i<=it;i++)
	//	{
	//		cout<<arr1[i]<<endl;
	//	}
	for(int i=0;i<it-1;i++)
	{
		if(arr1[i]==arr1[i+1])
			return 0;
	}
	return 1;
}

int main()
{
	int t,n;
	cin>>t;
	while(t>0)
	{
		
		cin>>n;
		int arr[n];
		it=-1;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int count[n][2];
		for(int i=0;i<n;i++)
			count[i][0]=count[i][1]=0;
		int max=0;
		if(check_seq(arr,n,count))
		{
			if(check_unique(count))
			{
			cout<<"YES"<<endl;
			}
			else
			cout<<"NO"<<endl;
		}
		else
			cout<<"NO"<<endl;
		
		t--;
	}
}