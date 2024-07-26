/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:11:37 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/26 14:19:01 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"utils.hpp"
#include <stdio.h>
#include <stdlib.h>

std::string	add_spaces(int n)
{
	std::string str;
	while(n--)
	{
		str.append(" ");
	}
	return(str);


}

std::string	fix_width(std::string str , long unsigned max)
{
	if(str.size() > max)
		{
			str.resize(max);
			str[str.size() - 1] = '.';
		}
		return(str);
}

int display(Contact contacts[8])
{
	char c = '0';
	int	i = 0 ;
	std::string str;

	std::cout << "|——————————|——————————|——————————|——————————|\n";
	std::cout << "|  Index   |   Name   |Last Name | Nickname |\n";
	std::cout << "|——————————|——————————|——————————|——————————|\n";
	while(++c <= '8')
	{
		if(contacts[c - 1- '0'].get_name().size() && ++i)
		{
			str = c;
			str = fix_width(str ,10);

			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1 - '0' ].get_name(), 10);

			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1 - '0'].get_lastname(), 10);

			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1 - '0'].get_speudo(), 10);

			std::cout << "|" << add_spaces(10 - str.size()) << str;
			std::cout << "|" << std::endl;
		}
	}
	std::cout << " ------------------------------------------- " << std::endl;
	return (i);
}
