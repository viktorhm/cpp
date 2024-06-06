/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:18:32 by vharatyk          #+#    #+#             */
/*   Updated: 2024/06/06 11:10:34 by vharatyk         ###   ########.fr       */
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
		if(std ::getline(std::cin , str ) && str != "")
			this->contacts[this->index % 8].set_lastname(str);
	}
	str= "";
	while(!std::cin.eof() && str == "")
	{
		std::cout<< this->contacts[this->index % 8].get_name() << "speudo";
		if(std ::getline(std::cin , str ) && str != "")
			this->contacts[this->index % 8].set_speudo(str);
	}
	str= "";
	while(!std::cin.eof() && str == "")
	{
		std::cout<< this->contacts[this->index % 8].get_name() << "phone";
		if(std ::getline(std::cin , str ) &&  str != "")
			this->contacts[this->index % 8].set_phone(str);
	}
	str= "";
	while(!std::cin.eof() && str == "")
	{
		std::cout<< this->contacts[this->index % 8].get_name() << "secret";
		if(std ::getline(std::cin , str ) && str != "")
		{
			this->contacts[this->index % 8].set_secret(str);
			std::cout << this->contacts[this->index % 8].get_name() << "profil creted ";
		}
	}
	this->index++;
}


void	Phonebook::print(Contact contact)
{
	if(!contact.get_name().size())
	{
		std::cout << "fail get info";
	}

	std::cout<<"name:"<<contact.get_name()<<std::endl;
	std::cout<<"last name:"<<contact.get_lastname()<<std::endl;
	std::cout<<"nickname"<<contact.get_speudo()<<std::endl;
	std::cout<<"num"<<contact.get_phone()<<std::endl;
	std::cout<<"secret"<<contact.get_secret()<<std::endl;
}
Contact Phonebook::get_contact(int index)
{
return(this->contacts[index % 8]);
}


void	Phonebook::search(void)
{
	std::string	str;
	if(!search_ui(this->contacts))
	{
		std::cout << std::endl << "Phonebook empty" << std::endl;
		return ;
	}
	while(!std::cin.eof())
	{
		std::cout << "select an index:";
			if(std::getline(std::cin, str) && str != "")
				{
					if(str.size() == 1 && str[0] >= '1')
						break;
				}
				if(str != "")
					std ::cout << "invalid index!" << std::endl;
	}
	if(!std::cin.eof())
		this->print(this->contacts[str[0] - 1 -'0']);

}

