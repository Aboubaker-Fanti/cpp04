#include "MateriaSource.hpp"

/* ************ Orthodox Canonical class form ************ */

MateriaSource::MateriaSource(){
    nbr = 0;
}

MateriaSource::MateriaSource(const MateriaSource& other){
    for (int i = 0; i < 4 && other.materias[i] != NULL; ++i) {
        materias[i] = (other.materias[i])->clone();
    }
    this->nbr = other.nbr;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){
    if (this == &other)
        return (*this);
    for (int i = 0; i < 4; ++i) {
        if (materias[i])
            delete materias[i];
    }
    for (int i = 0; i < 4 && other.materias[i] != NULL; ++i) {
            materias[i] = (other.materias[i])->clone();
        }
    this->nbr = other.nbr;
    return (*this);
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < nbr; i++) {    
        delete materias[i];
    }
}

/* ************ public member functions ************ */

void MateriaSource::learnMateria(AMateria* materia) {
    if (nbr < 4 && materia) {
        materias[nbr] = materia;
        nbr++;
    }
}

AMateria* MateriaSource::createMateria(const std::string& type) {
    for (int i = 0; i < nbr; i++) {
        if (materias[i]->getType() == type) {
            return materias[i]->clone();
        }
    }
    return 0;
}
