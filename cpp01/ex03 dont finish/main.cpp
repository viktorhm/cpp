/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 07:23:28 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/23 08:36:43 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"HumanB.hpp"


int main()
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
return 0;
}


// int main(void)
// {

// 	Weapon sword = Weapon("sharp sword in the obsidianne");
// 	HumanA Steve ("Steve", sword);
// 	Steve.setweapon(sword);
// 	Steve.attack();
// 	sword.setType("hit with your hand");
// 	Steve.attack();



// 	Weapon sword_popi = Weapon("sharp sword in the dirt");
// 	HumanB Popi ("Popi", sword_popi);
// 	Popi.setweapon(sword_popi);
// 	Popi.attack();
// 	sword_popi.setType("hit with your hand");
// 	Popi.attack();


// 	return(0);
// }