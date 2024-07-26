/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:36:25 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/26 14:11:34 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include <unistd.h>
#include"contact.hpp"

std::string	add_spaces(int n);
std::string	fix_width(std::string str , long unsigned max);
int	display(Contact constats[8]);

#endif