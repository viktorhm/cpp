/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 09:07:58 by vharatyk          #+#    #+#             */
/*   Updated: 2024/06/03 12:35:18 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include "utils.hpp"


class Phonebook
{
private:
	Contact contacts[8];
	int		index;
public:
	Phonebook(void);
	~Phonebook(void);
	void	add(void);
	void	search(void);
	void	print(Contact contats);

	contact get_contact(int index);
};

#endif