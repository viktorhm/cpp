

#pragma once

#include"Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const cat &copy);

    ~Cat();
    
    cat &operator=(Cat &src);
    void makeSound();

private:


};
