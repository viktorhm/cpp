/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 07:23:15 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/23 08:49:30 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name , Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanA " << name << " create";
	std::cout << weapon.getType() <<std::endl;

}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->_name <<" destroyed" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this-> _weapon.getType() << std::endl ;
}
void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}