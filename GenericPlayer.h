#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H
#include"Hand.h"
#include<string>

class GenericPlayer:public Hand
{
	protected:
		std::string name;


	public:
		GenericPlayer(std::string name): name(name) {	};
//	virtual bool IsHitting()=0;
		bool IsBoosted();//returns a bool value whether the player has iterated
		void Bust();//displays the player's name and announces that he has a bust.
		std::string getName()
		{
			return name;
		}

};

#endif

