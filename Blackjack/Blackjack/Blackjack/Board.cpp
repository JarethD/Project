/*
	Author: Jareth Dodson
	Date Created: 5-13-19
*/

#include "Board.h"

Board::Board()
{
}

Board::Board(const Board& copy) : m_deck(copy.m_deck)
{
}

Board& Board::operator=(const Board& rhs)
{
	if (this != &rhs)
	{
		m_deck = rhs.m_deck;
	}
	return *this;
}

Board::~Board()
{
}

void Board::DisplayBoard()
{
	system("CLS");
	for (int i = 0; i < 45; ++i)
		cout << "+";
	cout << '\n';
	COORD coord;
	coord.X = 15;
	coord.Y = 2;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	cout << "              Dealer                  Player                \n";
	cout << "                                                             ";
	SetConsoleCursorPosition(hConsole, coord);
	cout << "+---+\n";
	cout << "| ";/*
	if (tempPlayCell[i].getSuit() == C || tempPlayCell[i].Peek().getSuit() == S)
		SetConsoleTextAttribute(hConsole, 14);
	else
		SetConsoleTextAttribute(hConsole, 12);

	cout << rankDisplay[tempPlayCell[i].Peek().getRank()] << "-" << suitDisplay[tempPlayCell[i].Peek().getSuit()];
	SetConsoleTextAttribute(hConsole, 15);*/
	//"   |";
	/*
				+---+  +---+
				| 6 |  | ? |
				| S |  | ? |
				+---+  +---+

	*/
	//cout << "              Player                ";
	/*
				+---+  +---+
				| A |  | 7 |
				| D |  | H |
				+---+  +---+

	*/
	cout << "\n\n++++++++++++++++++++++++++++++++++++";
	//cout << "Hit(H), Stay(S), Double(D), Insurance(I)";

}
