/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:30:13 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/27 18:37:03 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int Fixed:: _value_fixe_static = 8;

Fixed::Fixed(): _value_fixe(0)
	{
		std::cout<<"Default constructor called"<<std::endl;
	}

Fixed::Fixed(const Fixed &copy)
	{
		std::cout <<"Copy constructor called" <<std::endl;
		*this = copy;
	}

Fixed::~Fixed()
	{
		std::cout<<"Destructor called"<<std::endl;
	}

Fixed &Fixed::operator=(const Fixed &src)
	{
		std::cout << "Copy assignment operator called "<<std::endl;
		if(this != &src)
			this->_value_fixe = src.getRawBits();

		return(*this);
	}


int  Fixed::getRawBits(void) const
	{
		std::cout <<"getRawBits member function called" <<std::endl;
		return(this->_value_fixe);
	}



void Fixed::setRawBits(int const raw)
	{
		std::cout <<"setRawBits member function called" <<std::endl;
		this->_value_fixe = raw;
	}

	
