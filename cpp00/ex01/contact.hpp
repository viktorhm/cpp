#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact
{
private:
	std::string	name;
	std::string	lastname;
	std::string	speudo;
	std::string	phone;
	std::string	secret;
public:
	Contact(void);
	~Contact(void);

	std::string	get_name(void)const;
	std::string	get_lastname(void)const;
	std::string	get_speudo(void)const;
	std::string	get_phone(void)const;
	std::string	get_secret(void)const;

	void	set_name(std::string str);
	void	set_lastname(std::string str);
	void	set_speudo(std::string str);
	void	set_phone(std::string str);
	void	set_secret(std::string str);
};

#endif