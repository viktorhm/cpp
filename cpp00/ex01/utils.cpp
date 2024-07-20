/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:11:37 by vharatyk          #+#    #+#             */
/*   Updated: 2024/06/08 17:22:30 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"utils.hpp"

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

int search_ui(Contact contacts[8])
{
	char c;
	int	i;
	std::string str;

	c = '0';
	i = 0;
	std::cout << "||—————————||————————||—————————————||————————————||\n";
	std::cout << "||  Index  ||  Name  ||  Last Name  ||  Nickname  ||\n";
	std::cout << "||—————————||————————||—————————————||————————————||\n";
	while(++c <= '8')
	{
		if(contacts[c - 1 - '0'].get_name().size() && ++i)
		{
			//?? index ???
			str = fix_width(str, 10);
			std::cout << "||" << add_spaces(9 - str.size()) << str;
			str = fix_width(contacts[c - 1  - '0'].get_name(), 9);
			std::cout << "||" << add_spaces(9 - str.size()) << str;
			str = fix_width(contacts[c - 1 - '0'].get_lastname(), 9);
			std::cout << "||" << add_spaces(9 - str.size()) << str;
			str = fix_width(contacts[c - 1 - '0'].get_speudo(), 9);
			std::cout << "||" << add_spaces(9 - str.size()) << str;
			std::cout << "||" << std::endl;
		}
	}
	std::cout << " ------------------------------------------- " << std::endl;
	return (i);
}
