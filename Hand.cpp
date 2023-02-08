#include "Hand.h"


void Hand:: Add(Card* card)
{ 
 	cards.push_back(card);
}
void Hand::  Clear()
{
	cards.clear();
}
int Hand::getValue() const
{
	int total = 0;
	for (auto s:cards)
	{
		int card = s->getValue();
		if(card != Card::Ace) {
			if(card >= Card::c2 && card <= Card::c10 ) {
				total += card;
			} else if(card == Card::King || card == Card::Queen || card == Card::Jack) {
				total += 10;
			}
		}
	}
	
	// Ace could cost 11 if total < 21, or 1 if total > 21
	for (auto s:cards)
	{
		int card = s->getValue();
		if(card == Card::Ace) {
			if(total + 11 <= 21) {
				total += 11;
			} else {
				total += 1;
			}
		}
	}
	
	return total;
}

