/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 06:13:17 by vharatyk          #+#    #+#             */
/*   Updated: 2024/08/25 14:11:26 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 #include "Zombie.hpp"

 Zombie :: Zombie (std::string name)
{
	this->_name = name;
	std::cout << "Zombie object " << this->_name << " create" << std::endl;
}
 Zombie :: ~Zombie()
{
	std::cout << "zombie object "<< this->_name << " destroyed " << std::endl;
}
void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}