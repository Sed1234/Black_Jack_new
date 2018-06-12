#pragma once
#include <array>
#include <unordered_map>
#include "User.h"
#include "AI.h"
#include "Admin.h"
#include "Card.h"

class BlackJack
{
	BlackJack(); 
	BlackJack(const BlackJack &) = delete;
	BlackJack & operator= (const BlackJack &) = delete;
	std::array<Card, 9> cards;
	std::vector<Player *> players;
	std::unordered_map<Player *, size_t> score;
	Admin admin;
public:
	void init();
	void play();
	static BlackJack & getInstance();
	~BlackJack();
};

