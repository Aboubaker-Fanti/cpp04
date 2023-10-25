#include "WrongCat.hpp"
/* ************ Orthodox Canonical class form ************ */

WrongCat::WrongCat(){
     std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other){
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat &other){
    if (this == &other)
        return (*this);
    return (*this);
}

WrongCat::~WrongCat(){
     std::cout << "WrongCat Destructor called" << std::endl;
}

/* ************ public member functions ************ */

void WrongCat::makeSound() const{
    std::cout << "wrong cat" << std::endl;
}
