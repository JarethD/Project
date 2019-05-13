/*
	Blackjack

	Author: Jareth Dodson
	Date Created: 5-13-19

	Purpose: Replicate card game Blackjack(21) in a text console	
*/

#include <iostream>
#include "Deck.h"
using std::cout;
using std::endl;

int main()
{
	cout << "Welcome To BlackJack" << endl;
	Deck d1;
	d1.Shuffle();
	for(int i = 0; i < 52; ++i)
		cout << d1.DealCard().getRank() << endl;
	return 0;
}