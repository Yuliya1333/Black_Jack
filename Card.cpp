#include "Card.h"
#include<vector>
#include<string>
#include<iostream>


Card::Card(Suit s, Value v)
	: suit(s), value(v), facedown(true) {}

void Card::Flip()
{
	facedown = !facedown;//flips card
}

Card::Value Card::getValue()
{
	return value;
}

void Card::Show(std::ostream& out)
{
	if(value <= 10)
	{
		out << value;
	}
	else
	{
		if (value== Jack)
		{
			out<<"Jack";
		}
		if (value== Queen)
		{
			out<<"Queen";
		}
		if (value== King)
		{
			out<<"King";
		}
		if (value== Ace)
		{
			out<<"Ace";
		}
	}

	out << " ";

	std::vector<std::string> suitName {"Diamonds", "Hearts", "Clubs", "Spades"};
	out <<  suitName[suit] << " ";

	if(facedown)
		out << " -> Facedown";
	else
		out << " -> Faceup";

//	out << std::endl;
}

std::ostream & operator <<(std::ostream & out, Card &card)
{

	if (card.facedown)
	{
		out<< "XX";
	}
	else
	{
		card.Show(out);
	}
	return out;
}



