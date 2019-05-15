#include "Deck.h"
/*
	Purpose:

	Preconditon:

	Postcondition:


*/
Deck::Deck() : m_currentCard(0)
{
	int current = 0;
	for (int i = 0; i < 4; ++i)
	{
		for (int x = 0; x < 13; ++x, ++current)
		{
			m_deck[current] = Card(SUIT(i+1), RANK(x+1));
		}
	}
}

/*
	Purpose:

	Preconditon:

	Postcondition:


*/
Deck::Deck(const Deck& copy) : m_currentCard(copy.m_currentCard)
{
	for (int i = 0; i < 52; ++i)
	{
		m_deck[i] = copy.m_deck[i];
	}
}

/*
	Purpose:

	Preconditon:

	Postcondition:


*/
Deck& Deck::operator=(const Deck& rhs)
{
	if (this != &rhs)
	{
		for (int x = 0; x < 52; ++x)
			m_deck[x] = rhs.m_deck[x];
		m_currentCard = rhs.m_currentCard;
	}
	return *this;
}

/*
	Purpose:

	Preconditon:

	Postcondition:


*/
Deck::~Deck()
{
	m_currentCard = 0;
}
/*
	Purpose:

	Preconditon:

	Postcondition:


*/

void Deck::Shuffle()
{
	srand(time(NULL));
	for (int i = 0; i < 52; ++i)
	{
		for (int x = 0; x < 10; ++x)
		{
			int randnum = rand() % 51;
			Card temp = m_deck[randnum];
			m_deck[randnum] = m_deck[i];
			m_deck[i] = temp;
		}
	}
	
}

/*
	Purpose:

	Preconditon:

	Postcondition:


*/
Card Deck::DealCard()
{
	return m_deck[m_currentCard++];
}
