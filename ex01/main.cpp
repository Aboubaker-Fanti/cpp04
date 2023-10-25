#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Animal* animals[100];
    // for (int o = 0; o < 100; o++){
    //     if (o % 2 == 0)
    //         animals[o] = new Dog();
    //     else
    //         animals[o] = new Cat();
    // }
    // for (int o = 0; o <= 99; o++){
    //     delete animals[o];
    // }

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    return(0);
}
