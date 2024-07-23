/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 06:58:08 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/23 06:58:11 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
	void announce(void);
	void setName(std::string name);
};

Zombie *newZombie(std::string name);

#endif
