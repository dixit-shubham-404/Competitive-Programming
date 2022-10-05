/*
Chef is now a corporate person. He has to attend office regularly. But chef does not want to go to office, 
rather he wants to stay home and discover different recipes and cook them.

In the office where chef works, has two guards who count how many times a person enters into the office building. 
Though the duty of a guard is 24 hour in a day, but sometimes they fall asleep during their duty and could not 
track the entry of a person in the office building. But one better thing is that they never fall asleep at the 
same time. At least one of them remains awake and counts who enters into the office.

Now boss of Chef wants to calculate how many times Chef has entered into the building. He asked to the guard and 
they give him two integers A and B, count of first guard and second guard respectively.

Help the boss to count the minimum and maximum number of times Chef could have entered into the office building.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of the T test cases follows.

Each test case consists of a line containing two space separated integers A and B.

Output
For each test case, output a single line containing two space separated integers, the minimum and maximum number of times Chef could have entered into the office building.

Constraints
1 ≤ T ≤ 100
0 ≤ A, B ≤ 1000000
*/
#include<iostream>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t>0)
	{
		cin>>a>>b;
		if(a>b)
		{
			cout<<a<<" "<<a+b<<endl;
		}
		else{
			cout<<b<<" "<<a+b<<endl;
		}
		t--;
	}
	return 0;
}
/*
LOGIC
MINIMUM=the max number of times seen by either guard
maximum=adding both guard number assuming when he comes only one was awake
*/