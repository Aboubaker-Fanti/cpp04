#include "WrongAnimal.hpp"
/* ************ Orthodox Canonical class form ************ */

WrongAnimal::WrongAnimal(){
     std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other){
    if (this == &other)
        return (*this);
    return (*this);
}

WrongAnimal::~WrongAnimal(){
     std::cout << "WrongAnimal Destructor called" << std::endl;
}

/* ************ public member functions ************ */

void WrongAnimal::makeSound() const{
    std::cout << "wrong animal" << std::endl;
}
