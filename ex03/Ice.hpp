#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria{
    public:
        Ice();
        Ice(const Ice &other);
        Ice& operator=(const Ice &other);
        ~Ice();

        void use(ICharacter& target);
        AMateria* clone() const;
        std::string const & getType() const;
};

#endif