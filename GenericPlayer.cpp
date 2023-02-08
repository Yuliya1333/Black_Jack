#include "GenericPlayer.h"
#include<iostream>
//checks if there are 21 points
bool GenericPlayer:: IsBoosted() {
	int scores =getValue();
	return(scores>21);
	
}
//Print the name of Player, who has more then 21 points
	void GenericPlayer:: Bust(){
		std::cout<<name<<std::endl;
		
	}

