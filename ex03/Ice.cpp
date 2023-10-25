#include "Ice.hpp"

/* ************ Orthodox Canonical class form ************ */

Ice::Ice(){
    type = "ice";
}

Ice::Ice(const Ice& other){
    *this = other;
}

Ice& Ice::operator=(const Ice& other){
    if (this == &other)
        return (*this);
    this->type = other.type;
    return(*this);
}

Ice::~Ice(){
}

/* ************ public member functions ************ */

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *$" << std::endl;
}

AMateria* Ice::clone() const{
    return new Ice(*this);
}

std::string const & Ice::getType() const{
    return (type);
}
