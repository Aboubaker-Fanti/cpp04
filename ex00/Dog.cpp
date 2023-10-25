#include "Animal.hpp"
#include "Dog.hpp"

/* ************ Orthodox Canonical class form ************ */

Dog::Dog(){
    this->type = "Dog";
     std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &other){
    *this = other;
}

Dog& Dog::operator=(const Dog &other){
    if (this == &other)
        return (*this);
    this->type = other.type;

    return (*this);
}

Dog::~Dog(){
     std::cout << "Dog Destructor called" << std::endl;
}

/* ************ public member functions ************ */

void Dog::makeSound() const {
    std::cout << "Dog Sound" << std::endl;
}

std::string Dog::getType() const{
    return (type);
}
