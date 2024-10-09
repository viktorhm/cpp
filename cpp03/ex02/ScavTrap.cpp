/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktor <viktor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:51:00 by vharatyk          #+#    #+#             */
/*   Updated: 2024/10/09 09:47:37 by viktor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hit_pts = 100;
	this->_energy = 50;
	this->_attack = 20;
	this->_guarding_gate = false ;
	std::cout <<"ScavTrap Default Contructor"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	this->_guarding_gate = copy._guarding_gate;
	std::cout<<"ScavTrap Copy Construtor called" << std::endl ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hit_pts = 100;
	this->_energy = 50;
	this->_attack = 20;
	this->_guarding_gate = false ;
	std::cout <<"ScavTrap Default Contructor for the name " << this->_name <<std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout <<"ScavTrap Deconstructor for " << this->_name << std::endl ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap assignation operator" <<std::endl;
	this->_name = src._name;
	this->_hit_pts = src._hit_pts;
	this->_energy = src._energy;
	this->_attack = src._attack;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if(this->_energy > 0 && this->_hit_pts > 0)
		{
			std::cout << "ScavTrap " << this->_name << " attack " << target << " causing " << this->_attack << " damage attack" <<std::endl;
			this->_energy--;
		}
	else if(this->_energy == 0)
		std::cout<<"ScavTrap "<< this->_name << " no enough energy_pts to attack the "<<target<<std::endl;
	else 
		std::cout<<"ScavTrap "<< this->_name << " no enough energy_pts to attack the " <<target<<std::endl ;
}

void  ScavTrap::guardGate(void)
{
	if(this->_guarding_gate == false)
	{
		this->_guarding_gate = true;
		std::cout << "ScavTrap" << this->_name << "is now guarding the gate"<<std::endl;
	}
	else 
	std::cout <<"ScavTrap" <<this->_name << "is alredy guarind the gate." <<std::endl;
}
