#include "Animal.hpp"
#include "Cat.hpp"

/* ************ Orthodox Canonical class form ************ */

Cat::Cat(){
    this->type = "Cat";
     std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &other){
    *this = other;
}

Cat& Cat::operator=(const Cat &other) {
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

Cat::~Cat(){
     std::cout << "Cat Destructor called" << std::endl;
}

/* ************ public member functions ************ */

void Cat::makeSound() const{
    std::cout << "Cat Sound" << std::endl;
}

std::string Cat::getType() const{
    return (type);
}