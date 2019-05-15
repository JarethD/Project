#include "Card.h"

class Player
{
	public:
		Player(); //CTOR
		Player(char playType); //1-ARG CTOR
		Player(const Player& copy); //COPY CTOR
		Player& operator=(const Player& rhs); //OP=
		~Player(); //DTOR
		
		void PlayerHit(Card card);
		void ClearHand();
		void RevieceHand(Card c1, Card c2);

		//SETTER/GETTERS
		char getPlayType();
		Card* getHand();
		int getHandTotal();
		int getHandSize();

		
	private:
		int m_handTotal;
		int m_handSize;
		char m_playType;
		Card* m_hand;
		
};