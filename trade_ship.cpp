#include "trade_ship.h"

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
