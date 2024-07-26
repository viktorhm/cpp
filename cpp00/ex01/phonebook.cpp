/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:18:32 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/26 14:11:59 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"
#include "utils.hpp"


Phonebook::Phonebook(void)
{
	this->index = 0 ;
	std::cout<<"------------------------------------"<<std::endl;
	std::cout<<"-----------welcom phonebook---------"<<std::endl;
	std::cout<<"----ADD--------SEARCH-------EXIT----"<<std::endl;
}
Phonebook::~Phonebook(void)
{
	std::cout << "warnig : Phonebook destroyed "<<std::endl;
}
void	Phonebook::add(void)
{
	std::string	str;
	str = "";
	if(this->index> 7)
		std::cout << "waring: overwrite" << std::endl;
	while(!std::cin.eof() && str == "")
	{
		std::cout<<"enter name : ";
		if(std::getline(std::cin , str) && str != "")
			this->contacts[this->index % 8 ].set_name(str);
	}
	str= "";
	while(!std::cin.eof() && str == "")
	{
		std::cout<<"last name : ";
		if(std ::getline(std::cin , str ) && str != "")
			this->contacts[this->index % 8].set_lastname(str);
	}
	str= "";
	while(!std::cin.eof() && str == "")
	{
		std::cout<<"speudo : ";
		if(std ::getline(std::cin , str ) && str != "")
			this->contacts[this->index % 8].set_speudo(str);
	}
	str= "";
	while(!std::cin.eof() && str == "")
	{
		std::cout<<"phone : ";
		if(std ::getline(std::cin , str ) &&  str != "")
			{
				for(int i = 0; str[i] ; i++)
					{
						if(!(str[i]>= '0' && str[i] <= '9' ) && str[i] != ' ' && str[i] != '+')
						{
							std::cout<<"plese enter the decimal number or the space or '+'"<<std::endl;
							str="";
							break;
						}
					}
			}
			this->contacts[this->index % 8].set_phone(str);
		}

	str= "";
	while(!std::cin.eof() && str == "")
	{
		std::cout<<"secret : ";
		if(std ::getline(std::cin , str ) && str != "")
		{
			this->contacts[this->index % 8].set_secret(str);
			std::cout << "profil creted ";
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

	std::cout<<"name      :"<<contact.get_name()<<std::endl;
	std::cout<<"last name :"<<contact.get_lastname()<<std::endl;
	std::cout<<"nickname  :"<<contact.get_speudo()<<std::endl;
	std::cout<<"num       :"<<contact.get_phone()<<std::endl;
	std::cout<<"secret    :"<<contact.get_secret()<<std::endl;
}
Contact Phonebook::get_contact(int index)
{
return(this->contacts[index % 8]);
}


void	Phonebook::search(void)
{
	std::string	str;
	if(!display(this->contacts))
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

