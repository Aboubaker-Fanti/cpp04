#include "Animal.hpp"
#include "Dog.hpp"

/* ************ Orthodox Canonical class form ************ */

Dog::Dog() {
    objs = new Brain();
    type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) {
    objs = new Brain();
    *this = other;
}

Dog& Dog::operator=(const Dog &other) {
    if (this == &other)
        return (*this);
    this->type = other.type;
    *this->objs = *other.objs;
    return (*this);
}

Dog::~Dog() {
    delete objs;
    std::cout << "Dog Destructor called" << std::endl;
}

/* ************ public member functions ************ */

void Dog::makeSound() const {
    std::cout << "Dog Sound" << std::endl;
}

std::string Dog::getType() const {
    return (type);
}