#ifndef HAND_H
#define HAND_H
#include<vector>
#include"Card.h"

class Hand
{
protected:
	
	std::vector<Card*> cards;
public:
	
	void Add(Card* card);
	 
	void Clear();
	
	int getValue() const;
	
	void Print(){
		for (auto c:cards)
		{
			std::cout<<*c<<std::endl;
		}
	}	
	
};

#endif
