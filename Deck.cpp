#include "Deck.h"
#include<iostream>
#include<string>
#include"Deck.h"
#include<algorithm>
#include<vector>
#include"Hand.h"


Deck::Deck()
{
	Populate();
}
void Deck::Populate()
{
	for(int value = 2; value <=14; ++value)
	{
		cards.push_back(new Card(Card::Diamonds, static_cast<Card::Value>(value)));
	}
	for(int value = 2; value <=14; ++value)
	{
		cards.push_back(new Card(Card::Hearts, static_cast<Card::Value>(value)));
	}
	for(int value = 2; value <=14; ++value)
	{
		cards.push_back(new Card(Card::Clubs, static_cast<Card::Value>(value)));
	}
	for(int value = 2; value <=14; ++value)
	{
		cards.push_back(new Card(Card::Spades, static_cast<Card::Value>(value)));
	}
	for(auto p : cards)
	{
		p->Flip();
		//std::cout << *p ;
	}
}
void Deck::Shuffle()
{
	shuffle(cards.begin(),cards.end(), std::mt19937(std::random_device()()));

}

void Deck::Print()
{
	for(auto p : cards)
	{
		//std::cout << *p ;
		p->Show(std::cout);

	}
}
void Deck:: Deal (Hand& aHand)
{
	Card *card = cards.back();
	cards.pop_back();
	aHand.Add(card);
	std::cout << "deal card " << *card << std::endl;
}
bool Deck::AdditionalCards (GenericPlayer& aGenericPlayer)
{
	int points = aGenericPlayer.getValue();
	if (points <21)
	{
		std::cout<<"Do you need a card, " << aGenericPlayer.getName() << "? ";
		std::string answer;
		std::cin>>answer;
		if (answer == "yes")
		{
			Deal(aGenericPlayer);
			return true;
		}
	} else if(points == 21) {
		std::cout << " -> 21!" << std::endl;
		
	} else if(points > 21) {
		std::cout << " oh, no, it's " << points << std::endl;
	}
	return false;
}



