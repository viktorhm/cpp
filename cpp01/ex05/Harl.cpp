/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:47:20 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/24 16:49:25 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
	return;
}

Harl::~Harl()
{
	return;
}

void Harl::debug(void)
{
 std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"<<std::endl;
}

void Harl::info(void)
{
std::cout<<"cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}
void Harl::warning(void)
{
std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}
void Harl::error(void)
{
std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}
void Harl::complain(std::string result)
{
	int i = 0;
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl :: *fer[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while(i > 4 && tab[i].compare(result) != 0)
	{
		i++;
	}
	if(i > 3)
		std::cout << " no normal probleme "<< std::endl;
	else
		(this->*fer[i])();

}