#include "the_corsairs.h"

int randomValue(){ return 20 + rand() % 75;	}
Ship::Ship()
{
	HP=randomValue();
	amount_sailors=randomValue();
	amount_guns=randomValue();
	speed=randomValue();
	luck=randomValue();
	gold=0;
}
string Ship::getname(){};
void Ship::description()
{
	printf("HP = %d || żeglarze = %d || armaty = %d || szybkość okrętu = %d || szczęście = %d || złoto = %d \n"
		,HP, amount_sailors, amount_guns, speed, luck, gold);
}


