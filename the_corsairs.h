#pragma once
#include <stdio.h>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <fstream>
#include <cstdlib>

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




