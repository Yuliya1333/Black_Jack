#ifndef CARD_H
#define CARD_H
#include<iostream>
// Class describe a card in the Game
class Card {
public:
	enum Suit {
		Diamonds,
		Hearts,
		Clubs,
		Spades
	};
	
	enum Value {
		c2 = 2, 
		c3, c4, c5, c6, c7, c8, c9, c10,
		Jack =11,
		Queen=12,
		King=13,
		Ace=14
	};	
	Card(Suit s, Value v);		
	void Flip();//flips the card if she was shirt up and conversely
	Value getValue();	
	void Show(std::ostream& out);	
private:
	Suit suit;
	Value value;
	bool facedown;
	
	friend std::ostream & operator <<(std::ostream & out, Card &card);////operator overloading shows "XX" if the card is facedown   

};

#endif
