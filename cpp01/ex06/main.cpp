/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:45:25 by vharatyk          #+#    #+#             */
/*   Updated: 2024/08/05 12:16:36 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
	Harl harl;
	for(int i = 1; i < argc; i++)
	{
		harl.complain(argv[i]);
		std::cout << std::endl;
	}
	return(0);
}