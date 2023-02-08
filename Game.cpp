#include "Game.h"

Game::Game (std::vector<std::string> names)
{
	players.push_back(new House {});
	for (auto name: names)
	{
		players.push_back(new GenericPlayer(name));
	}
	deck.Shuffle();
}
void Game::play()
{
	std::cout<<"The Game is started!"<<std::endl;
	for(auto &p:players)
	{
		deck.Deal(*p);
	}
	GenericPlayer* first = players.front();
	House* house = static_cast<House*>(first);
	house->FlipFirstCard();

	for(auto &p:players)
	{
		deck.Deal(*p);
	}

	while(1)
	{
		for (auto p:players)
		{
			std::cout << std::endl;
			std::cout<<p->getName()<<":"<<std::endl;
			p->Print();
			std::cout << p->getValue() << std::endl;
		}
		int counter = 0;

		for (auto& p:players)
		{
			
			std::cout<<p->getName()<<": -> ";
			bool yes=deck.AdditionalCards(*p);
			if (yes == true)
			{
				counter+=1;
			}
			
		}
		
		if (counter == 0)
		{
			int max = 0;
			std::string name_winner;
			std::cout<<"The game is complete"<<std::endl;
			for (auto&p:players)
			{
				if (p->getValue()>max and p->getValue()<=21)
				{
				
					max = p->getValue();
					name_winner = p->getName();
				}	
				
			}
			std::cout<<name_winner<<" is the winner! Congratulations! "<< max<<" points"<<std::endl;
			
			break;
			
			
			
		}

		std::cout << std::endl;

		bool end = true;
		for (auto p:players)
		{
			if(p->getValue() < 21)
				end = false;
			if(p->getValue() == 21)
			{
				std::cout<<p->getName()<<" is a winner!"<<std::endl;
				end = true;
				break;
			}
		}

		if(end == true)
		{
			break;
		}
			

	}
}
