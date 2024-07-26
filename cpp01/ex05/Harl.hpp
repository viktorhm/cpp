/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:47:17 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/24 16:53:26 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

#ifndef HARLE_HPP
# define HARLE_HPP

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl(void);
	~Harl(void);

	void complain(std::string result);
};

#endif

