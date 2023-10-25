#include "Character.hpp"

/* ************ Orthodox Canonical class form ************ */

Character::Character(){
    for (int i = 0; i < 4; i++){
        save_materia[i] = NULL;
        slots[i] = NULL;
    }
    d = 0;
}

Character::Character(std::string name){
    for (int i = 0; i < 4; i++){
        save_materia[i] = NULL;
        slots[i] = NULL;
    }
    this->name = name;
    d = 0;
}

Character::Character(const Character& other){
     for (int i = 0; i < 4 && other.slots[i] != NULL; ++i) {
            slots[i] = (other.slots[i])->clone();
        }
        for (int i = 0; i < 4 && other.save_materia[i] != NULL; ++i) {
            save_materia[i] = (other.save_materia[i])->clone();
        }
        this->d = other.d;
}

Character& Character::operator=(const Character& other) {
    if (this == &other)
        return (*this);
    for (int i = 0; i < 4; ++i) {
        if (slots[i] != NULL)
            delete slots[i];
        if (save_materia[i] != NULL)
            delete save_materia[i];
    }
    for (int i = 0; i < 4 && other.slots[i] != NULL; ++i) {
        slots[i] = (other.slots[i])->clone();
    }
    for (int i = 0; i < 4 && other.save_materia[i] != NULL; ++i) {
        save_materia[i] = (other.save_materia[i])->clone();
    }
    this->name = other.name;
    return (*this);
}

Character::~Character(){
  for (int i = 0; i < 4; ++i) {
        if (slots[i] != NULL) {
            delete slots[i];
            slots[i] = NULL;
        }
    }
}

/* ************ public member functions ************ */

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++){
        if (save_materia[i] != NULL) {
            delete save_materia[i];
            save_materia[i] = NULL;
        }
    }
    for (int i = 0; i < 4; ++i) {
        if (slots[i] == m)
            break;
        else if (slots[i] == NULL) {
            slots[i] = m;
            return;
        }
        else if (slots[i] != NULL && i == 4) {
            delete m;
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && d != 4) {
        for (int i = 0; i < 4; i++){
            if (save_materia[i] == slots[idx])
                break;
            else if (save_materia[i] == NULL) {
                save_materia[i] = slots[idx];
                d++;
                break;
            }
        }
    }
    else
        std::cout <<  d << "you cannot delete more than 4 materia thank you" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && slots[idx] != 0) {
        slots[idx]->use(target);
    }
}

std::string const & Character::getName() const {
    return (name);
}
