#include <Animal.hpp>

Animal::Animal() : _type("") {
    std::cout << "Default animal constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &src) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(const Animal &src) {
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

const std::string &Animal::getType() const {
    return (_type);
}

