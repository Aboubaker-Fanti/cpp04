#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    j->getType();
    i->getType();
    i->makeSound();
    j->makeSound();
    delete i;
    delete j;
    return 0;
}
