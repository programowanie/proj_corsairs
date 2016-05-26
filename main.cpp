// version 1.0

#include <iostream>
#include "the_corsairs.h"
#define CONST 2.5
//using namespace std;
int main(int argc, char **argv)
{
	srand(time(NULL));
	Corsairs_Ship corsairs;
	//corsairs.corsairs_description();
	//cout<<corsairs.shoot()<<endl;
	//cout<<corsairs.defend()<<endl;
	while(corsairs.getHP()>0)
	{
		sleep(CONST);
		corsairs.heal();
		//printf("regeneracja %s",corsairs.name_corsairs.c_str());
		corsairs.corsairs_description();
		sleep(CONST);
		Trade_Ship merchant;
		merchant.trade_description();
		while(1)
		{
		int attack[2];
		// czy atakuje?
		attack[0]=(corsairs.getLuck()>rand()%100 ? corsairs.shoot() : 0);
		attack[1]=(merchant.getLuck()>rand()%100 ? merchant.shoot() : 0);
		//printf("%d %d\n",attack[0],attack[1]);
		//z jaką siłą? uwzględniam obronę
		int damage[2];
		damage[0]=(attack[0]==0 ? 0 : attack[0]*merchant.defend());
		damage[1]=(attack[1]==0 ? 0 : attack[1]*corsairs.defend());
		//printf("%d %d\n",damage[0],damage[1]);
		sleep(CONST);
		if(damage[0]>0)
		{
			merchant.hurt(damage[0]);
			printf("%s trafił @@@ zadaje %d obrażeń\n%s HP: %d\n",
				corsairs.name_corsairs.c_str(),damage[0],merchant.name_trade.c_str(),merchant.getHP());

		}
				else {printf("%s chybił\n",corsairs.name_corsairs.c_str());}
		sleep(CONST);
		if(damage[1]>0)
		{
			corsairs.hurt(damage[1]);
			printf("%s trafił @@@ zadaje %d obrażeń\n%s HP: %d\n",
				merchant.name_trade.c_str(),damage[1],corsairs.name_corsairs.c_str(),corsairs.getHP());
			//printf("hp corsairs : %d\n",corsairs.getHP());
		}
				else {printf("%s chybił\n",merchant.name_trade.c_str());}
		if(corsairs.getHP()<0 )
		{
			printf("%s zginął\n",corsairs.name_corsairs.c_str());
			break;
		}
		if(merchant.getHP()<0 )
		{
			printf("%s zginął\n",merchant.name_trade.c_str());
			break;
		}
		}
	}
	printf("KONIEC ???\n");
}
