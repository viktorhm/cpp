/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:36:37 by vharatyk          #+#    #+#             */
/*   Updated: 2024/10/09 12:28:25 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void	alice_rundown(void)
{
	FragTrap alice("Alice");

	alice.attack("Bob");
	alice.attack("Chris");
	alice.attack("Diana");
	alice.attack("Elisa");
	alice.attack("Fred");
	alice.attack("Gemma");
	alice.attack("Henry");
	alice.attack("Isabella");
	alice.attack("Jack");
	alice.attack("Kevin");
	alice.attack("Laura");
	alice.attack("Mike");
	alice.highFivesGuys();
}

void	bob_rundown(void)
{
	FragTrap	bob("Bob");
	for(int i = 0 ; i < 5 ; i++)
	{
		bob.takeDamage(20);
	bob.beRepaired(10);
	}

	bob.takeDamage(1);
	bob.highFivesGuys();
}

int	main(void)
{
	std::cout << std::endl << std::endl << "Alice's" << std::endl << std::endl;
	alice_rundown();
	std::cout << std::endl << std::endl << "Bob's" << std::endl << std::endl;
	bob_rundown();
}