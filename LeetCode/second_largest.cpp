/*
Three numbers A, B and C are the inputs. Write a program to find second largest among three numbers.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three integers A, B and C.

Output
Display the second largest among A, B and C.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B,C ≤ 1000000
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,arr[3];
	cin>>t;
	while(t>0)
	{
		for(int i=0;i<3;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+3);
		cout<<arr[1]<<endl;
		t--;
	}
	return 0;
}