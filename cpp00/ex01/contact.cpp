/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:09:26 by vharatyk          #+#    #+#             */
/*   Updated: 2024/06/06 10:22:23 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"contact.hpp"

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