/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 06:03:08 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/23 06:52:55 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
Zombie *zombieHorde(int N, std::string name);

int main (void)
{
	int size = 10;
	Zombie *horde = zombieHorde(size, "Zombie");
	for(int i = 0; i < size ; i++)
		horde[i].announce();
	delete [] horde;
}