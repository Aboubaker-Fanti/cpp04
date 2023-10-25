# ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>
#include "ICharacter.hpp"

class AMateria{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &other);
        AMateria& operator=(const AMateria &other);
        virtual ~AMateria();

        std::string const & getType() const;
        virtual void use(ICharacter& target);
        virtual AMateria* clone() const = 0;
};

#endif