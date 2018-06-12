#pragma once
#include "Player.h"
#include "Card.h"
#include <iostream>
class User : public Player
{
public:
	Card choose(std::vector <Card> &) override final;
	User(const std::string &);
	~User();
};

