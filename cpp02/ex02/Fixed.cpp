/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:30:13 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/27 19:36:35 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

const int Fixed:: _value_fixe_static = 8;

Fixed::Fixed(): _value_fixe(0)
	{
		std::cout<<"Default constructor called"<<std::endl;
	}

Fixed::Fixed(const int input)
	{
		std::cout <<"Int constructor called" <<std::endl;
		this->_value_fixe = input << this->_value_fixe_static;
	}

Fixed::Fixed(const float input)
	{
		std::cout<<"Float constructor called"<<std::endl;
		this->_value_fixe = roundf(input * (1 << this->_value_fixe_static));
	}

Fixed::Fixed(const Fixed& copy)
	{
		std::cout << "Fixed Copy constructor called" << std::endl;
		*this = copy;
	}

Fixed::~Fixed()
	{
		std::cout<<"Destructor called"<<std::endl;
	}

Fixed &Fixed::operator=(const Fixed &input)
	{
		std::cout << "Copy assignment operator called "<<std::endl;
		if(this != &input)
			this->_value_fixe = input.getRawBits();

		return(*this);
	}

std::ostream	&operator<<(std::ostream &out , Fixed const &Fixed)
{
	out << Fixed.toFloat();
	return(out);
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


int Fixed::toInt(void) const
	{
		return((int)(this->_value_fixe >> _value_fixe_static));
	}

float Fixed::toFloat(void) const
	{
		return((float)this->_value_fixe / (1<<this->_value_fixe_static));
	}
