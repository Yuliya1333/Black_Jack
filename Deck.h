#ifndef DECK_H
#define DECK_H
#include "GenericPlayer.h"
#include "Hand.h"

class Deck : public Hand
{	
	public:
		Deck();
		void Populate();//creates a standard deck of 52 cards, called from the constructor.
		void Shuffle(); //Method that shuffles cards using STL random_shuffle algorithms
		void Print();
		void Deal (Hand& aHand);// deals one card into the hand
		bool AdditionalCards (GenericPlayer& aGenericPlayer);//gives the player additional cards for as long as he can and wants to receive them
	
	protected:
};

#endif
