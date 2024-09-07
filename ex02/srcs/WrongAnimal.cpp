#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() : _type("") {
    std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

const std::string &WrongAnimal::getType() const {
    return (_type);
}

void WrongAnimal::makeSound() {
    std::cout << "IM NOT REAL AND ALSO WRONG" << std::endl;
}
