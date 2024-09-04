#include <Cat.hpp>
#include <Dog.hpp>


int main() {
    Animal *animalArr[2];
	for (int i = 0; i < 2; i++)
	{
		std::cout << "\nCreating\n" << std::endl;
		if (i % 2)
			animalArr[i] = new Dog();
		else
			animalArr[i] = new Cat();
		animalArr[i]->makeSound();
	}
	std::cout << "\nCreating stack cat\n" << std::endl;
	Cat		*catPtr;
	Cat		testCat;
	std::cout << "\nCopying cats\n" << std::endl;
	catPtr = (Cat *)animalArr[0];
	catPtr->setIdea("I hate mice", 0, 100);
	testCat = *catPtr;
	std::cout << "\nTesting more cats\n" << std::endl;
	catPtr->makeSound();
	testCat.makeSound();
	std::cout << "\nDeleting\n" << std::endl;
	for (int j = 0; j < 2; j++)
		delete animalArr[j];
	std::cout << "\nFinale\n" << std::endl;
	testCat.makeSound();
	std::cout << testCat.getIdea(99) << std::endl;
}