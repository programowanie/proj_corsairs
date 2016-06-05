#pragma once
#include "the_corsairs.h"
#include "trade_ship.h"

class Corsairs_Ship : public Ship
{
private:
	vector <string> names_corsairs;
	int BaseHP;
	int howmanykills=0;

public:
	string name_corsairs;
	Corsairs_Ship();
	void heal(){HP=BaseHP;}
	virtual string getname();
	void corsairs_description();
	void addkill(){howmanykills++;}
	int showkill(){return howmanykills;}
	bool stillive();
	void plunder(Trade_Ship &);
};
