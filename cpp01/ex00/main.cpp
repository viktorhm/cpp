/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 06:03:08 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/23 06:26:22 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

int main (void)
{
	Zombie *z = newZombie("my");
	z->announce();
	randomChump("you");
	delete z;
}