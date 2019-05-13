/*
	Author: Jareth Dodson
	Date Created: 5-13-19
*/
#include "Deck.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Board
{
	public:
		Board();
		Board(const Board& copy);
		Board& operator=(const Board& rhs);
		~Board();
		void DisplayBoard();
		void UpdateBoard();

	private:
		Deck m_deck;
};