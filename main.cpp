#include <iostream>
#include"Hand.h"
#include"Card.h"
#include"Deck.h"
#include "GenericPlayer.h"
#include "Game.h"
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    std::vector<std::string> names{};
	int amount=0;
	std::cout<<"How many players will play?";
	std::cin>>amount;
	
	for (int i=0;i<amount;i++)
	{
		std::string name;
		std::cout<<"What is your name?";
		std::cin>>name;
		names.push_back(name);
		
	}
	
	
	Game game(names);
	game.play();
	
/*	Card card1(Card::Diamonds, Card::c7), 
   card2(Card::Hearts, Card::Queen);
   std::cout<<card1<<card2<<std::endl;
   card1.Flip();
   card2.Flip();
   std::cout<<card1<<card2<<std::endl;
   GenericPlayer b("Jack");
   b.Bust();
   Deck deck{};
   
	
	card2.Flip();
	card1.Show();
	card2.Show();
	Hand hand1;
	hand1.Add(&card1);
	hand1.Add(&card2);
	std::cout<<hand1.getValue();
	hand1.Clear();
	std::cout<<hand1.getValue();
	deck.Shuffle();
	deck.Print();*/

	
	
	return 0;
	
}
