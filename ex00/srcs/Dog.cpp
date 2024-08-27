#include <Dog.hpp>

Dog::Dog() : Animal() {
    _type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &src) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog &Dog::operator=(const Dog &src) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

void Dog::makeSound() {
    std::cout << "Wuff" << std::endl;
}
