/*
	Author: Jareth Dodson
	Date Created: 5-13-19
*/

#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include "Deck.h"

using std::cout;
using std::endl;
using std::cin;
using std::setw;


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