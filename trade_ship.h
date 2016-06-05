#pragma once
#include "the_corsairs.h"

class Trade_Ship : public Ship
{
private:
	vector <string> names_trade;

public:
	string name_trade;
	Trade_Ship();
	virtual string getname();
	void trade_description();
};