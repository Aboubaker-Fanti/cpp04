#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& other){
    *this = other;
}

Brain& Brain::operator=(const Brain& other){
    if (this == &other)
        return (*this);
    for (int i = 0; i < 100; i++){
        this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

Brain::~Brain(){
     std::cout << "Brain Destructor called" << std::endl;
}
