/*
	Author: Jareth Dodson
	Date Created: 5-13-19
*/
#include "Board.h"
#include <string>

using std::string;

class Blackjack
{
	public:
		Blackjack();
		~Blackjack();

		void GetUserInput();

	private:
		Board m_board;
};