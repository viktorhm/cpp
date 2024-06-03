/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:18:32 by vharatyk          #+#    #+#             */
/*   Updated: 2024/06/03 12:58:26 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"
#include "utils.hpp"

Phonebook::Phonebook(void)
{
	this->index = 0 ;
	std::cout<<"welcom phonebook"<<std::endl;
}
Phonebook::~Phonebook(void)
{
	std::cout << "bye"<<std::endl;
}
void	Phonebook::add(void)
{
	std::string	str;
	str = "";
	if(this->index> 7)
		std::cout << "waring: overwrite" << std::endl;
	while(!std::cin.eof() && str == "")
	{
		std::cout<<"Entre name :";
		if(std::getline(std::cin , str) && str != "")
			this->contacts[this->index % 8 ].set_name(str);
	}
	str= "";
	while(!std::cin.eof() && str == "")
	{
		std::cout<< this->contacts[this->index % 8].get_name() << "last name";
		if(std ::getline(std::cin , str ) && != "")
			this->contacts[this->index % 8].set_lastname(str);
	}
	str= "";
	while(!std::cin.eof() && str == "")
	{
		std::cout<< this->contacts[this->index % 8].get_name() << "speudo";
		if(std ::getline(std::cin , str ) && != "")
			this->contacts[this->index % 8].set_speudo(str);
	}
	str= "";
	while(!std::cin.eof() && str == "")
	{
		std::cout<< this->contacts[this->index % 8].get_name() << "phone";
		if(std ::getline(std::cin , str ) && != "")
			this->contacts[this->index % 8].set_phone(str);
	}
	str= "";
	while(!std::cin.eof() && str == "")
	{
		std::cout<< this->contacts[this->index % 8].get_name() << "secret";
		if(std ::getline(std::cin , str ) && != "")
		{
			this->contacts[this->index % 8].set_secret(str);
			std::cout << this->contacts[this->index % 8].get_name << "profil creted "
		}
	}
	this->index++;
}


void	Phonebook::print()

