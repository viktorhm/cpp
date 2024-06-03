/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 08:37:25 by vharatyk          #+#    #+#             */
/*   Updated: 2024/06/01 10:51:57 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"


int main(void)
{
	Phonebook	pb;
	std::string	str;

	while(str != "EXIT")
	{
		std::cout << "enter a command";
		std::getline(std::cin , str);
		if(str == "ADD")
			pb.add();
		else if(str == "SEARCH")
			pb.seach();
		if(std::cin.eof())
		{
			std::cout<<std::endl;
			return(0);
		}
	}
	return(0);
}

