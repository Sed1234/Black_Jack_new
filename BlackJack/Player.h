#pragma once
#include <string>
#include "Card.h"
#include <vector>
class Player
{
public:
	std::string name;
	Player(const std::string &);
	std::string getName();
	virtual Card choose(std::vector <Card> &) = 0;
	virtual ~Player();
};

