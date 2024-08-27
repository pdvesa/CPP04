#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongCat.hpp>

int main() {
    Animal *meta = new Animal();
    Animal *j = new Dog();
    Animal *i = new Cat();
    WrongAnimal *w = new WrongAnimal();
    WrongAnimal *ww = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << ww->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();
    ww->makeSound();
    w->makeSound();
    delete meta;
    delete j;
    delete i;
    delete w;
    delete ww;
    return 0;
}