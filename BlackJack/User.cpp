#include "User.h"



Card User::choose(std::vector<Card>& cards)
{
	std::cout << "Suggested cards: " << std::endl;
	int cnt = 0;
	for (Card & card : cards)
	{
		std::cout<<++cnt<<' '<<card.getName() << std::endl;
	}
	int choice;
	std::cout << "Please choose: ";
	std::cin >> choice;
	try {
		return cards[choice - 1];
	}
	catch (...) {
		std::cout << "Error" << std::endl;
	}
}

User::User(const std::string & name) :Player( name)
{
}


User::~User()
{
}
