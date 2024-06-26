/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 08:37:17 by vharatyk          #+#    #+#             */
/*   Updated: 2024/06/01 08:45:24 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main (int argc , char *argv[])
{
	int i = 0;
	int j = 1;

	if(argc < 2)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(argv[j])
	{
		i=0;
		while(argv[j][i])
		{
			std::cout<<(char)std::toupper(argv[j][i]);
			i++;
		}
		j++;
	}
	std::cout<<std::endl;
	return(0);
}