#include <Cat.hpp>

Cat::Cat() : Animal() {
    _type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &src) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat &Cat::operator=(const Cat &src) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

void Cat::makeSound() {
    std::cout << "Meow" << std::endl;
}
