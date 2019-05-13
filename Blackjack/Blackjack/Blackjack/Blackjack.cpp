#include "Blackjack.h"

Blackjack::Blackjack() : m_board()
{
}

void Blackjack::GetUserInput()
{
	string name;
	int pin = 0;
	string login;
	cout << "Login(L) or Create Account(C)";
	cin >> login;
	
	if (login == "C" || login == "c")
	{
		cout << "Enter Account name(Login will be case sensitive) : ";
		cin >> name;
		cout << "Enter pin/password for account(4 digit pin): ";
		cin >> pin;
		//Add login name and pin as one into binary file
		//Create a class for player
		//Give each player 500 chips at start
	}
	else if (login == "L" || login == "Login" || login == "l" || login == "login")
	{
		//Ask for login name
		//Ask for pin
		//Search binary file for player

	}
}
