#ifndef HOUSE_H
#define HOUSE_H

#include "GenericPlayer.h"

class House : public GenericPlayer
{
	public:
		 House();
		 bool IsHitting() const;
		 void FlipFirstCard();
	protected:
};

#endif
