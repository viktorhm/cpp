/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 07:23:19 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/23 08:49:23 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		&_weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void attack(void);
	void setWeapon(Weapon Weapon);
};

