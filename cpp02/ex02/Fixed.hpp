/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:29:02 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/27 19:32:20 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed& copy);

		~Fixed();

		Fixed &operator=(const Fixed &input);
		Fixed operator+(const Fixed &input) const;
		Fixed operator-(const Fixed &input) const;
		Fixed operator*(const Fixed &input) const;
		Fixed operator/(const Fixed &input) const;
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int n);
		Fixed operator--(int n);


		bool	operator>( const Fixed &fixed1 ) const;
		bool	operator<( const Fixed &fixed1 ) const;
		bool	operator>=( const Fixed &fixed1 ) const;
		bool	operator<=( const Fixed &fixed1 ) const;
		bool	operator==( const Fixed &fixed1 ) const;
		bool	operator!=( const Fixed &fixed1 ) const;

		int		toInt(void) const;
		float	toFloat(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int raw);

	static Fixed	min( Fixed &fixed1, Fixed &fixed2);
	static Fixed	min( const Fixed &fixed1, const Fixed &fixed2);
	static Fixed	max( Fixed &fixed1, Fixed &fixed2);
	static Fixed	max( const Fixed &fixed1, const Fixed &fixed2);

	private:

		int	_value_fixe;
		static const int _value_fixe_static;

};

std::ostream	&operator<<(std::ostream &out , Fixed const &Fixed);

# endif
