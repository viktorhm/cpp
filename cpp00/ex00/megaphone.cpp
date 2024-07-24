/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 08:37:17 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/24 13:24:44 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main (int argc, char *argv[])
{
	int i;
	int j = -1;

	if (argc < 2)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argc > 1 && argv && argv[++j])
	{
		i = -1;
		while (j > 0 && argv[j][++i])
			std::cout<<(char)std::toupper(argv[j][i]);
	}
	std::cout<<std::endl;
	return (0);
}
