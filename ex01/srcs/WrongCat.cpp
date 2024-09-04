#include <WrongCat.hpp>

WrongCat::WrongCat() : WrongAnimal() {
    _type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if (this == &src)
		return (*this);
	this->_type = src._type;
	return (*this);
}

void WrongCat::makeSound() {
    std::cout << "Meow" << std::endl;
}
