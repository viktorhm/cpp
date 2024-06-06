/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:07:13 by vharatyk          #+#    #+#             */
/*   Updated: 2024/06/06 10:17:57 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"


int main(void)
{
	Phonebook	phonebook;
	std::string	str;

	while(str != "EXIT")
	{
		std::cout << "enter a command";
		std::getline(std::cin , str);
		if(str == "ADD")
			phonebook.add();
		else if(str == "SEARCH")
			phonebook.search();
		if(std::cin.eof())
		{
			std::cout<<std::endl;
			return(0);
		}
	}
	return(0);
}