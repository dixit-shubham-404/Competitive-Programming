/*
Chef has been recruited to Chefland's Army. The army of a neighbouring country is continuosly 
infiltrating the Borders, since there is no proper marking or fencing on the land, chef's 
commanding officer(CO) commanded him to place milestone markings on the border.

CO tells Chef that the border is an infinite x axis with non-negative integer coordinates 
starting from 0 and gives him four integers a, b, L, R . Markings are placed such that 1st 
mark is placed at (a) units , 2nd mark is placed at (a+b) units , 3rd mark is placed at (a+b+a) units , 
4th mark is placed at (a+b+a+b) units… and so on.

CO wants to know the number of milestone markers used by Chef in [L,R] units ( inclusive of L and R ).

Since chef was so busy placing the markers, he forgot to count them. Chef is weak in Math, help him 
report the answer to CO.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, four integers a,b,L,R.
Output:
For each testcase, output in a single line , the number of markers placed between L and R units.
Constraints
T≤105
0≤L≤R≤109
1≤a,b≤109

*/



#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t, a, b, l, r, r1, r2, d1, d2;
    cin>>t;
    while (t--)
    {

        cin >> a >> b >> l >> r;
        d2 = 2 * ((r) / (a + b));
        if (l != 0)
            l--;
        d1 = 2 * ((l) / (a + b));
        r2 = ((r) % (a + b));
        r1 = ((l) % (a + b));
        if (r2 >= a)
            d2++;
        if (r1 >= a)
            d1++;
        cout << d2-d1 << endl;
    }
    return 0;
}