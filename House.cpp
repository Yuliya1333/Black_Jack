#include "House.h"
#include<iostream>
//represents the dealer
House::House():GenericPlayer ("House")
{
	
}

bool House::IsHitting() const//method shows if the dealer needs another card. If the dealer has no more than 16 points, then he takes one more card.
{
	if (getValue()<=16)
	{
		return true;
	}
	else
	{
		return false;
	}

}

void House::FlipFirstCard()
{
	cards[0]->Flip();//flips the dealer's first card.
};
