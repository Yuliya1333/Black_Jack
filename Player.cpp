#include "Player.h"
#include<iostream>
#include<string>


	 bool Player::IsHitting() const
	{
		bool flag;
		std::cout<<"Do you need another card?"<<std::endl;
		std::cin>>flag;
		return flag;
		
	};
		void Player::Win()const
		{
			std::cout<<name<<"  win!"<<std::endl;
		}
		;
		void Player::Lose()const
		{
			std::cout<<name<<" lost"<<std::endl;
		}
		;
		void Player::Push() const
		{
			std::cout<<name<<"draw"<<std::endl;
		};
