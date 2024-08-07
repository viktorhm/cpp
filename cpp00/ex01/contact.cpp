/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:09:26 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/26 14:10:06 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"contact.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

std::string	Contact::get_name(void) const
{
return(this->name);
}

std::string	Contact::get_lastname(void) const
{
return(this->lastname);
}

std::string	Contact::get_speudo(void)const
{
return(this->speudo);
}

std::string	Contact::get_phone(void)const
{
	return(this->phone);
}

std::string	Contact::get_secret(void)const
{
	return(this->secret);
}

void	Contact::set_name(std::string str)
{
	this->name = str;
}
void	Contact::set_lastname(std::string str)
{
	this->lastname = str;
}
void	Contact::set_speudo(std::string str)
{
	this->speudo = str;
}
void	Contact::set_phone(std::string str)
{
	this->phone = str;
}
void	Contact::set_secret(std::string str)
{
	this->secret = str;
}