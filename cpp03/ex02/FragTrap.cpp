/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:51:00 by vharatyk          #+#    #+#             */
/*   Updated: 2024/10/09 12:13:20 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_hit_pts = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout <<"FragTrap Default Contructor"<<std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout<<"FragTrap Copy Construtor called" << std::endl ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hit_pts = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout <<"FragTrap Default Contructor for the name " << this->_name <<std::endl;
}

FragTrap::~FragTrap()
{
	std::cout <<"FragTrap Deconstructor for " << this->_name << std::endl ;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap assignation operator" <<std::endl;
	this->_name = src._name;
	this->_hit_pts = src._hit_pts;
	this->_energy = src._energy;
	this->_attack = src._attack;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is asking for a high five" << std::endl;
}
