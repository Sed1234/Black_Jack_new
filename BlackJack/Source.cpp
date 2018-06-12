#include "BlackJack.h"

int main()
{
	BlackJack::getInstance().init();
	BlackJack::getInstance().play();
	system("pause");
	return 0;
}