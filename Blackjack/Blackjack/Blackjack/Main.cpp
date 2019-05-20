/*
	Blackjack

	Author: Jareth Dodson
	Date Created: 5-13-19

	Purpose: Replicate card game Blackjack(21) in a text console	
*/

#include <iostream>
//#include "Blackjack.h"
#include "Player.h"

using std::cout;
using std::endl;

int main()
{
	cout << "Welcome To BlackJack" << endl;
	/*Blackjack game;
	game.PlayGame();*/
	//Board b1;
	//b1.DisplayBoard();
	Player p1;
	p1.RevieceHand(Card(SUIT(1), RANK(2)), Card(SUIT(2), RANK(8)));
	//cout << p1.m_handTotal << endl;
	p1.PlayerHit(Card(SUIT(4), RANK(1)));
	cout << p1.getHandSize() << " " << p1.getHandTotal() << " ";
	//return 0;
}