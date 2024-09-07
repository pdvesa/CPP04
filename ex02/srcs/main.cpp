#include <Cat.hpp>
#include <Dog.hpp>


int main() {
	Animal *dog = new Dog;
	Animal *cat = new Cat;
	Cat		*tester;
	Cat		copyer;
	Cat		second;

	cat->makeSound();
	tester = (Cat *)cat;
	copyer.setIdea("I hate you ", 0, 100);
	second = copyer;
	std::cout << copyer.getIdea(1);
	dog->makeSound();
	delete cat;
	delete dog;
}