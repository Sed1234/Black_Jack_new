#include "Admin.h"



std::vector<Card> Admin::generateCards(std::array<Card, 9> & cards)
{
	srand(time(NULL));
	std::vector<Card> result;
	while (3 > result.size())
	{
		Card temp = cards[rand() % 9];
		bool dublicate = false;

		for (Card & card : result)
		{
			if (card.getValue() == temp.getValue())
			{
				dublicate = true;
				break;
			}
		}
		if (!dublicate)
		{
			result.push_back(temp);
		}
		
	}
	return result;
}

Admin::Admin()
{
}


Admin::~Admin()
{
}
