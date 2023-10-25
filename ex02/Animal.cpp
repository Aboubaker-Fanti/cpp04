#include "Animal.hpp"

/* ************ Orthodox Canonical class form ************ */

Animal::Animal(){
    this->type = "Animals";
     std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other){
    *this = other;
}

Animal& Animal::operator=(const Animal &other){
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

Animal::~Animal(){
     std::cout << "Animal Destructor called" << std::endl;
}

/* ************ public member functions ************ */

std::string Animal::getType() const{
    return (type);
}
