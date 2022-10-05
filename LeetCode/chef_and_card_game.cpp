/*
Chef is playing a card game with his friend Morty Smith.

The rules of the game are as follows:

There are two piles of cards, pile A and pile B, each with N cards in it. Pile A belongs to Chef and pile B belongs to Morty.
Each card has one positive integer on it
The ‘power’ of a card is defined as the sum of digits of the integer on that card
The game consists of N rounds
In each round, both players simultaneously draw one card each from the top of their piles and the player who draws the card with higher power wins this round and gets a point. If the powers of both players' cards are equal then they get 1 point each.
The winner of the game is the player who has more points at the end of N rounds. If both players have equal number of points then the game ends in a draw.
The game is now over and Chef has told Morty to find the winner. Unfortunately, this task is too complex for him. Help Morty find the winner.

Input:
First line will contain T, number of testcases.
The first line of each test case will contain N, the number of rounds played.
The ith of the next N lines of each test case will contain Ai and Bi, the number on the card drawn by Chef and Morty respectively in round i.
Output:
For each test case, output two space separated integers on a new line:
Output

0 if Chef wins,
1 if Morty wins,
2 if it is a draw,
followed by the number of points the winner had.
(If it is a draw then output either player’s points).
Constraints
1≤T≤1000
1≤N≤100
1≤Ai,Bi≤109Chef is playing a card game with his friend Morty Smith.

The rules of the game are as follows:

There are two piles of cards, pile A and pile B, each with N cards in it. Pile A belongs to Chef and pile B belongs to Morty.
Each card has one positive integer on it
The ‘power’ of a card is defined as the sum of digits of the integer on that card
The game consists of N rounds
In each round, both players simultaneously draw one card each from the top of their 
piles and the player who draws the card with higher power wins this round and gets a point. 
If the powers of both players' cards are equal then they get 1 point each.
The winner of the game is the player who has more points at the end of N rounds. 
If both players have equal number of points then the game ends in a draw.
The game is now over and Chef has told Morty to find the winner. Unfortunately, 
this task is too complex for him. Help Morty find the winner.

Input:
First line will contain T, number of testcases.
The first line of each test case will contain N, the number of rounds played.
The ith of the next N lines of each test case will contain Ai and Bi, 
the number on the card drawn by Chef and Morty respectively in round i.
Output:
For each test case, output two space separated integers on a new line:
Output

0 if Chef wins,
1 if Morty wins,
2 if it is a draw,
followed by the number of points the winner had.
(If it is a draw then output either player’s points).
Constraints
1≤T≤1000
1≤N≤100
1≤Ai,Bi≤109
*/

#include<iostream>
using namespace std;
int main()
{
	int t,n,temp;
	cin>>t;
	long long int card_c,card_m,score_c,score_m,points_c,points_m;
	while(t>0)
	{
		cin>>n;
		points_c=0;
		points_m=0;
		for(int i=0;i<n;i++)
		{
			cin>>card_c>>card_m;
			score_c=0;
			score_m=0;
			while(card_c>0)
			{
				temp=card_c%10;
				score_c+=temp;
				card_c/=10;
			}
			while(card_m>0)
			{
				temp=card_m%10;
				score_m+=temp;
				card_m/=10;
			}
			if(score_c>score_m)
			{
				points_c++;
			}
			else if(score_c<score_m)
			{
				points_m++;
			}
			else{
				points_c++;
				points_m++;
			}
		}
		if(points_c>points_m)
		{
			cout<<"0 "<<points_c<<endl;
		}
		else if(points_c<points_m)
		{
			cout<<"1 "<<points_m<<endl;
		}
		else
		{
			cout<<"2 "<<points_c<<endl;
		}
		t--;
	}
	return 0;
}