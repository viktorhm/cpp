/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 07:23:22 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/23 08:41:52 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL)
{
	this->_name = name;
	std::cout << "HumanB " << name << " create" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->_name <<" destroyed" << std::endl;
}

void HumanB::attack(void)
{
	if (this->_weapon == NULL)
	{
		std::cout << this->_name << " attacks with his hand" << std::endl;
	}
	else
	{
	std::cout << this->_name << " attacks with his " << this-> _weapon->getType() << std::endl ;
	}
}
void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
