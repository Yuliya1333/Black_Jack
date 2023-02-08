#ifndef PLAYER_H
#define PLAYER_H

#include "GenericPlayer.h"

class Player : public GenericPlayer
{
	public:
		virtual bool IsHitting() const;//returns a bool value whether the player has iterated
		void Win()const;//displays the player's name and a message that he has won.
		void Lose()const;//displays the player's name and a message that he has lost.
		void Push() const;//displays the player's name and a message that he has tied.
		
	protected:
};

#endif
