/*
Every year the professor selects the top two students from his class and takes them on a fun filled field trip, this year Ali and Zafar were selected.

The professor took them to a place where there was a never-ending queue of solid metal cubes. 
The professor could see n cubes at a time. On the day before, he had painted the first n cubes from the left with various colours.

Ali was allowed to choose any painted cube to initially stand on (say X). Zafar was asked to 
stand on the last painted cube (the nth cube) with the professor.

The two students were given an activity each:

Ali had to shout out the colour of the cube he is standing on.
Zafar had to paint the adjacent cube on the right of him with that colour.
Both Ali and Zafar had to take one step to the right each time they performed their activity.

The Professor jumped along with Zafar, and never left his side. Throughout the activity he was 
looking leftwards keeping an eye on Ali. They were given a gold star and were allowed to go home 
when all the cubes that the professor could see at the time were painted with the same color.

Ali wanted to choose a position furthest from the professor and also wanted the gold star.

Can you help Ali to choose this position X?

The cubes are numbered from 1 starting from the first painted cube. The colours are represented as integers.

Input:
The first line contains one integer n, the number of cubes initially painted.
The second line contains n space-separated integers: a1, a2, …, an, the colours the professor chose for the first n cubes.
Output:
Print a single line containing one integer X, the position Ali should initially stand on.

Constraints
1≤n≤106
0≤ai≤999
Sample Input 1:
4
3 3 8 8

Sample Output 1:
3

Sample Input 2:
4
2 8 7 3

Sample Output 2:
4
*/

#include <iostream>
using namespace std;

int main() {
long int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
i=n-1;
while(i>=0){
    if(a[i]==a[i-1]){
        i--;
    }
    else{
        cout<<i+1;
        break;
    }
}
	return 0;
}
