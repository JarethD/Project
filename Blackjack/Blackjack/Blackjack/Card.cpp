#include "Card.h"


/*
	Purpose: Default Constructor for card class
	
	Precondition:
		Card class must be instantiated
	Postcondtion:
		Card object is created with default values of 0
*/
Card::Card() : m_suit(NONE), m_rank(DEF)
{
}
/*
	Purpose: 2 arg Constructor for card class

	Precondition:
		Must be given SUIT and RANK
	Postcondtion:
		Card object is created with suit and rank given
*/
Card::Card(SUIT suit, RANK rank) : m_suit(suit), m_rank(rank)
{
}
/*
	Purpose: Copy Constructor
*/
Card::Card(const Card& copy) : m_suit(copy.m_suit), m_rank(copy.m_rank)
{
}

Card& Card::operator=(const Card& rhs)
{
	if (this != &rhs)
	{
		m_suit = rhs.m_suit;
		m_rank = rhs.m_rank;
	}
	return *this;
}

Card::~Card()
{
	m_suit = NONE;
	m_rank = DEF;
}

SUIT Card::getSuit()
{
	return m_suit;
}

RANK Card::getRank()
{
	return m_rank;
}
