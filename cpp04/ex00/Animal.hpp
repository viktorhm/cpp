
#include <iostream>
#include"Cat.hpp"
#include"Dog.hpp"


Class Animal
{
	public:
		Animal();
		Animal(const Animal &animals)
		~Animal();

		void makeSound(std::string _type);
	protected:
		std::string _type;

};
