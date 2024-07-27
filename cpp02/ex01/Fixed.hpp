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

		int		toInt(void) const;
		float	toFloat(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int raw);


	private:

		int	_value_fixe;
		static const int _value_fixe_static;

};

std::ostream	&operator<<(std::ostream &out , Fixed const &Fixed);

# endif