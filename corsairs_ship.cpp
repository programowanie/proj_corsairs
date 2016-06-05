#include "corsairs_ship.h"

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