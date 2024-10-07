/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktor <viktor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:29:02 by vharatyk          #+#    #+#             */
/*   Updated: 2024/10/07 11:29:36 by viktor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>
# include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed& copy);

		~Fixed();

		Fixed &operator=(const Fixed &input);

		float operator+(Fixed fixed) const;
		float operator-(Fixed fixed) const;
		float operator*(Fixed fixed) const;
		float operator/(Fixed fixed) const;

		Fixed operator++();
		Fixed operator--();
		
		Fixed operator++(int);
		Fixed operator--(int);


		bool	operator>(Fixed &fixed1) const;
		bool	operator<(Fixed &fixed1) const;
		bool	operator>=(Fixed &fixed1) const;
		bool	operator<=(Fixed &fixed1) const;
		bool	operator==(Fixed &fixed1) const;
		bool	operator!=(Fixed &fixed1) const;

		int		toInt(void) const;
		float	toFloat(void) const;

		//GETTER
		int		getRawBits(void) const;
		//SETTER
		void	setRawBits(int const raw);

		static Fixed		&min( Fixed &fixed1, Fixed &fixed2);
		static const Fixed	&min( Fixed const &fixed1, Fixed const &fixed2);
		static Fixed		&max( Fixed &fixed1, Fixed &fixed2);
		static const Fixed	&max( Fixed const &fixed1, Fixed const &fixed2);

	private:
		int	_value_fixe;
		static const int _value_fixe_static;

};

std::ostream	&operator<<(std::ostream &out , Fixed const &Fixed);

# endif
