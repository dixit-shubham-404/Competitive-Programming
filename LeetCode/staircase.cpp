/*
Given N number of square blocks. The height of each square block is 1. The task is to create a  staircase of max height using these blocks.
Note: The first stair would require only one block, the second stair would require two blocks and so on.

Input:
The first line of the input contains T i.e number of test cases. Each line of the test case contains a number  N i.e number of blocks. 

Output:
Each new line of the output contains only one single integer i.e Maximum height of staircase.

Constraints:
1 <= T <= 100
1 <= N <= 108

Example:
Input:
3
10
12
16
Output:
4
4
5
*/

#include<iostream>
using namespace std;
int main()
{
	int t,n,height;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		height=0;
		for(int i=1;n>0;i++)
		{
			if(n-i>=0)
				height++;
			n-=i;
		}
		cout<<height<<endl;
		t--;
	}
}