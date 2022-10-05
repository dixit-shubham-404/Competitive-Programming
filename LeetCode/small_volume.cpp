/*
Hritik gave his friend a cude with side L. The L x L x L cube is made up of small 1 x 1 x 1cubes.

Hritik's friend wants to become a mathematician, so he dropped the cube inside a tank filled 
with water. Since the water was dirty, the cube also got dirty. As his friend do not likes 
dirty stuffs so he decided to scrap off the smaller cubes that got dirty. A cube that had 
water on any of its six faces was considered dirty and scraping off. After completing all 
this, he decided to calculate the volume of the scrapped material.

Since Hritik is weak at maths, so he asked his friend's help.

Input Format
The first line contains T denoting the number of test cases. Then T lines follow each line contains L that is the side of cube.

Output Format
For each case output the required volume.

Constraints
1 ≤ T ≤ 100

1 ≤ L ≤ 10^9

, where '^' represents power operator.
*/
#include<iostream>
#define ll long long int 
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll y;
		if(n==1){
		    cout<<1<<endl;
		}
		else if(n==2){
		    cout<<8<<endl;
		}
		else{
    		y  = (n*n*n)-((n-2)*(n-2)*(n-2));
    		cout<<y<<endl;
		}
	}
	return 0;
}