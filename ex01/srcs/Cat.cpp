#include <Cat.hpp>

Cat::Cat() : Animal() {
    _type = "Cat";
    _brain = new Brain;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
    delete _brain;
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
    if (this->_brain)
        delete this->_brain;
    this->_brain = new Brain(*src._brain); 
	return (*this);
}

void Cat::makeSound() {
    std::cout << "Meow" << std::endl;
}

const std::string Cat::getIdea(int index) const {
    return (_brain->getIdea(index));
}

void Cat::setIdea(std::string idea, int start, int end) {
    _brain->setIdea(idea, start, end);
}
