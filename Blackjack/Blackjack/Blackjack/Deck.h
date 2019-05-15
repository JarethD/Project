/*
	Author: Jareth Dodson
	Date Created: 5-13-19
*/

#include "Card.h"
#include <stdlib.h>
#include <time.h>

class Deck
{
	public:
		Deck();
		Deck(const Deck& copy);
		Deck& operator=(const Deck& rhs);
		~Deck();

		void Shuffle();
		Card DealCard();

	private:
		Card m_deck[52];
		int m_currentCard;
};