/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktor <viktor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:30:13 by vharatyk          #+#    #+#             */
/*   Updated: 2024/10/07 11:16:58 by viktor           ###   ########.fr       */
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

//-----------------------------------------------------------------------------------------------
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

//-----------------------------------------------------------------------------------------------

Fixed &Fixed::operator=(const Fixed &input)
	{
		std::cout << "Copy assignment operator called "<<std::endl;
		if(this != &input)
			this->_value_fixe = input.getRawBits();

		return(*this);
	}


// arithmetics operators
float Fixed::operator+(Fixed fixed) const
{
	return(this->toFloat() + fixed.toFloat());
}

float Fixed::operator-(Fixed fixed) const
{
	return(this->toFloat() - fixed.toFloat());
}

float Fixed::operator*(Fixed fixed) const
{
	return(this->toFloat() - fixed.toFloat());
}
float Fixed::operator/(Fixed fixed) const
{
	return(this->toFloat() / fixed.toFloat());
}

// increment and decrement operators
Fixed	Fixed::operator++()
{
	this->_value_fixe++;
	return(*this);
}
Fixed	Fixed::operator--()
{
	this->_value_fixe--;
	return(*this);
}


Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->_value_fixe;
	return(tmp);
}
Fixed  Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->_value_fixe;
	return(tmp);
}

// comparison operators

bool	Fixed::operator>(Fixed &fixed1) const
{
	return(this->toFloat() > fixed1.toFloat());
}

bool	Fixed::operator<(Fixed &fixed1) const
{
	return(this->toFloat() < fixed1.toFloat());
}
bool	Fixed::operator>=(Fixed &fixed1) const
{
	return(this->toFloat() >= fixed1.toFloat());
}
bool	Fixed::operator<=(Fixed &fixed1) const
{
		return(this->toFloat() <= fixed1.toFloat());
}
bool	Fixed::operator==(Fixed &fixed1) const
{
	return(this->toFloat() == fixed1.toFloat());	
}
bool	Fixed::operator!=(Fixed &fixed1) const
{
	return(this->toFloat() != fixed1.toFloat());
}

Fixed &Fixed::min( Fixed &fixed1, Fixed &fixed2)
{
	if(fixed1.toFloat() <= fixed2.toFloat())
		return(fixed1);
	else 
		return(fixed2);
}

const  Fixed &Fixed::min( const Fixed &fixed1,const Fixed &fixed2)
{
	if(fixed1.toFloat() <= fixed2.toFloat())
		return(fixed1);
	else 
		return(fixed2);
}

Fixed &Fixed::max( Fixed &fixed1, Fixed &fixed2)
{
	if(fixed1.toFloat() >= fixed2.toFloat())
		return(fixed1);
	else 
		return(fixed2);
}

const Fixed	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if(fixed1.toFloat() >= fixed2.toFloat())
		return(fixed1);
	else 
		return(fixed2);
}

