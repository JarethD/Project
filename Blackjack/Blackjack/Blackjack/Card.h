/*
	Author: Jareth Dodson
	Date Created: 5-13-19
	Class: Card

	Purpose: Act as a single card from a deck of cards
*/

enum SUIT { NONE, SPADE=1, HEART, CLUB, DIAMOND };
enum RANK { DEF, ACE=1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN ,JACK, QUEEN ,KING};

class Card
{
	public:
		Card();
		Card(SUIT suit, RANK rank);
		Card(const Card& copy);
		Card& operator=(const Card& rhs);

		~Card();

		SUIT getSuit();
		RANK getRank();

	private:
		SUIT m_suit;
		RANK m_rank;
};