/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:50:48 by vharatyk          #+#    #+#             */
/*   Updated: 2024/08/02 16:10:13 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap(std::string name);
		
		virtual ~ScavTrap();

		ScavTrap &operator=(const ScavTrap &src);

		void attack(const std::string& target);
		void guardGate(void);

	private:
		bool _guarding_gate;

};

# endif