/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 07:23:47 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/23 07:50:49 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP
class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string type);
	~Weapon(void);
	const std::string& getType(void);
	void	setType(std::string type);
};

#endif
