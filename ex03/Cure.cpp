#include "Cure.hpp"

/* ************ Orthodox Canonical class form ************ */

Cure::Cure(){
    type = "cure";
}

Cure::Cure(const Cure& other){
    *this = other;
}

Cure& Cure::operator=(const Cure& other){
    if (this == &other)
        return (*this);
    this->type = other.type;
    return(*this);
}

Cure::~Cure(){
}

/* ************ public member functions ************ */

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *$" << std::endl;
}

AMateria* Cure::clone() const{
    return new Cure(*this);
}

std::string const & Cure::getType() const{
    return (this->type);
}