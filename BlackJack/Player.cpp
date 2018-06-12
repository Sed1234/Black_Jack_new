#include "Player.h"


Player::Player(const std::string & name) : name(name)
{

}

std::string Player::getName()
{
	return name;
}

Card Player::choose(std::vector<Card>&)
{
	throw std::exception("not implemented");
}


Player::~Player()
{
}
