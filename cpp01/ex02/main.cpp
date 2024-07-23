/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 06:57:57 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/23 07:18:32 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(void)
{
	std::string string_var ="HI THIS IS BRAIN";
	std::string *stringPTR = &string_var;
	std::string &stringREF = string_var;

	std::cout << "string adress :" << &string_var <<std::endl;
	std::cout << "stringPTR adress :" <<stringPTR <<std::endl;
	std::cout << "stringREF adress :" <<&stringREF <<std::endl;

	std::cout << "string string:" << string_var << std::endl;
	std::cout << "stringPTR string:" << *stringPTR << std::endl;
	std::cout << "stringREF string:" << stringREF << std::endl;

	return(0);
}