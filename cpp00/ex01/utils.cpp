/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:11:37 by vharatyk          #+#    #+#             */
/*   Updated: 2024/06/06 11:36:25 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"utils.hpp"

int search_ui(Contact contacts[8])
{
	char c;
	int	i;
	std::string str;

	c = '0';
	i = 0;
	std::cout << "||—————————||————————||—————————————||————————————||";
	std::cout << "||  Index  ||  Name  ||  Last Name  ||  Nickname  ||";
	std::cout << "||—————————||————————||—————————————||————————————||";
	while(++c <= '8')
	{
		if(contacts[c - 1 - '0'].get_name().size() && ++i)
		{

			str = fix_width(str, 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1  - '0'].get_name(), 10);
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