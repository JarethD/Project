#include "Deck.h"

Deck::Deck() : currentCard(0)
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

Deck::~Deck()
{
}

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

Card Deck::DealCard()
{
	return m_deck[currentCard++];
}
