#include <stdio.h>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
using namespace std;


class Ship
{
protected:
	int HP, amount_sailors, speed, amount_guns, luck, gold;
public:
	Ship();
	virtual string getname();
	void description();
	int shoot() {return (amount_guns*amount_sailors)/50;}
	float defend(){return (rand()%(100-luck*speed/100)+luck*speed/100)/100.0;}
	int getLuck() {return luck;}
	int getHP(){return HP;}
	int getGold(){return gold;}
	void hurt(int a){HP-=a;}
};


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
