#include "Player.h"

Player::Player() : m_hand(nullptr), m_playType('\0'), m_handTotal(0), m_handSize(0)
{
}

Player::Player(char playType) : m_hand(nullptr), m_playType(playType), m_handTotal(0), m_handSize(0)
{
}

Player::Player(const Player& copy) : m_hand(nullptr), m_handTotal(copy.m_handTotal), 
	m_playType(copy.m_playType), m_handSize(copy.m_handSize)
{
	/*m_hand = new Card[copy.m_handSize];
	for (int i = 0; i < copy.m_handSize; ++i)
		m_hand[i] = copy.m_hand[i];*/
	m_hand = copy.m_hand;
}

Player& Player::operator=(const Player& rhs)
{
	if (this != &rhs)
	{
		ClearHand();
		for (int i = 0; i < rhs.m_handSize; ++i)
			m_hand[i] = rhs.m_hand[i];
		m_handSize = rhs.m_handSize;
		m_handTotal = rhs.m_handTotal;
		m_playType = rhs.m_playType;
	}
	return *this;
}

Player::~Player()
{
	ClearHand();
}

void Player::PlayerHit(Card card)
{
	//Update Hand
	Card* temp = new Card[m_handSize + 1];
	for (int i = 0; i < m_handSize; ++i)
		temp[i] = m_hand[i];
	ClearHand(); //Purge();

	temp[m_handSize] = card;
	m_hand = temp;
	//Update Total
	m_handTotal = m_handTotal + temp[m_handSize].getRank();
	//Update Size
	++m_handSize;
}

void Player::ClearHand()
{
	if (m_hand != nullptr)
	{
		delete[] m_hand;
		m_hand = nullptr;
	}

}

void Player::RevieceHand(Card c1, Card c2)
{
	Card* temp = new Card[2];
	temp[0] = c1;
	m_handSize++;
	temp[1] = c2;
	m_handSize++;
	m_hand = temp;

	m_handTotal = c1.getRank() + c2.getRank();
}

char Player::getPlayType()
{
	return m_playType;
}

Card* Player::getHand()
{
	return m_hand;
}

int Player::getHandTotal()
{
	return m_handTotal;
}

int Player::getHandSize()
{
	return m_handSize;
}
