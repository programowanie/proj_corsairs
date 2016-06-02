#include "the_corsairs.h"
#include <fstream>
#include <cstdlib>

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
string Trade_Ship::getname()
{

	ifstream file("names_trade.dat");
	while(!file.eof())
	{
		string word;
		file>>word;
		names_trade.push_back(word);
	}
	file.close();
	return names_trade[rand()%names_trade.size()];
}
Trade_Ship::Trade_Ship()
{
	Ship();
	name_trade=Trade_Ship::getname();
	gold=rand()%1000+100;
}
void Trade_Ship::trade_description()
{
	printf("^ %s || ",name_trade.c_str());
	Ship::description();
}
string Corsairs_Ship::getname()
{

	ifstream file("names_corsairs.dat");
	while(!file.eof())
	{
		string word;
		file>>word;
		names_corsairs.push_back(word);
	}
	file.close();
	return names_corsairs[rand()%names_corsairs.size()];
}
Corsairs_Ship::Corsairs_Ship()
{
	Ship();
	BaseHP=HP;
	name_corsairs=Corsairs_Ship::getname();
}	
void Corsairs_Ship::corsairs_description()
{
	printf("^ %s || ",name_corsairs.c_str());
	Ship::description();
}
void Corsairs_Ship::plunder(Trade_Ship &tr_ship)
{
	gold+=tr_ship.getGold();
}
