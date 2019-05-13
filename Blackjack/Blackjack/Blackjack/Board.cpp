/*
	Author: Jareth Dodson
	Date Created: 5-13-19
*/

#include "Board.h"

Board::Board()
{
}

void Board::DisplayBoard()
{
	cout << "++++++++++++++++++++++++++++++++++++";
	cout << "              Dealer                ";
	/*
				+---+  +---+
				| 6 |  | ? |
				| S |  | ? |
				+---+  +---+

	*/
	cout << "              Player                ";
	/*
				+---+  +---+
				| A |  | 7 |
				| D |  | H |
				+---+  +---+

	*/
	cout << "Hit(H), Stay(S), Double(D), Insurance(I)";

}
