/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:29:02 by vharatyk          #+#    #+#             */
/*   Updated: 2024/07/27 18:30:10 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& copy);

		~Fixed();

		Fixed &operator=(const Fixed &src);
		int getRawBits(void) const;
		void setRawBits(const int raw);

	private:

		int	_value_fixe;
		static const int _value_fixe_static;

};

#endif