#include "AMateria.hpp"

/* ************ Orthodox Canonical class form ************ */

AMateria::AMateria(){
}

AMateria::AMateria(std::string const &type): type(type){
}

AMateria::AMateria(const AMateria &other){
    *this = other;
}

AMateria& AMateria::operator=(const AMateria &other){
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

AMateria::~AMateria(){
}

/* ************ public member functions ************ */

std::string const & AMateria::getType() const{
    return (this->type);
}

void AMateria::use(ICharacter& target){
    std::cout  << target.getName() << std::endl;
}
