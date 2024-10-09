/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktor <viktor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:37:27 by vharatyk          #+#    #+#             */
/*   Updated: 2024/10/09 09:18:35 by viktor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(): _name("default"), _hit_pts(10), _energy(10), _attack(0)
{

	std::cout <<"ClapTrap Default Contructor"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap copy Contructor"<<std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_pts(10), _energy(10), _attack(0)
{
	std::cout <<"ClapTrap Default Contructor for the name " << _name <<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout <<"ClapTrap Deconstructor for " << _name << std::endl ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap assignation operator" <<std::endl;
	this->_name = src._name;
	this->_hit_pts = src._hit_pts;
	this->_energy = src._energy;
	this->_attack = _attack;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if(this->_energy > 0 && this->_hit_pts > 0)
		{
			std::cout << "ClapTrap " << this->_name << " attack " << target << " causing " << this->_attack << " damage attack" <<std::endl;
			this->_energy--;
		}
	else if(this->_energy == 0)
		std::cout<<"ClapTrap "<< this->_name << " no enough energy_pts to attack the" << target<<std::endl;
	else 
		std::cout<<"ClapTrap "<< this->_name << " no enough _hit_pts to attack the" << target << std::endl ;


}
		

void  ClapTrap::takeDamage(unsigned int amount)
{
	if(this->_hit_pts > amount)
		this->_hit_pts -= amount;
	else if (this->_hit_pts > 0)
		this->_hit_pts = 0;
	else
		{
			std::cout << "ClapTrap " <<this->_name <<" is alredy dead "<< std::endl;
			return ;
		}
	std::cout << "ClapTrap " << this->_name << " was attacked and lost " << amount << " health point you has "  <<this->_hit_pts << std::endl;
}


void  ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_energy> 0 && this->_hit_pts > 0 && this->_hit_pts + amount <= 10)
	{
		this->_hit_pts += amount;
		std::cout << "ClapTrap" <<this->_name << " Repaired itself : +" << amount <<"health . you has " << this->_hit_pts << std::endl;
		this->_energy--;
	}
	else if(this->_energy == 0)
	{
		std::cout<<"ClapTrap" << this->_name << " not repair enough _energy_pts"<<std::endl;
	}
	else if (this->_hit_pts == 0)
	{
		std::cout<<"ClapTrap " << this->_name << " not repair enough _hit_pts"<<std::endl;
	}
	else
	{
		std::cout<<"ClapTrap "<< this->_name << " can't be repaired to have more than 10 hit points"<<std::endl;

	}

}