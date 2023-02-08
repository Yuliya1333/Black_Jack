#ifndef GAME_H
#define GAME_H
#include "Card.h"
#include"Hand.h"
#include"Deck.h"
#include "GenericPlayer.h"
#include "House.h"
#include <vector>
#include "Player.h"


class Game
{
	public:
		Deck deck;
		Hand hand;
		std::vector<GenericPlayer*> players;
		Game (std::vector<std::string> names);
		void play();
		


	protected:
};

#endif
