#include <Dog.hpp>

Dog::Dog() : Animal() {
    _type = "Dog";
    _brain = new Brain;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
    delete _brain;
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
    if (this->_brain)
        delete this->_brain;
    this->_brain = new Brain(*src._brain); 
	return (*this);
}

void Dog::makeSound() {
    std::cout << "Wuff" << std::endl;
}

const std::string Dog::getIdea(int index) const {
    return (_brain->getIdea(index));
}

void Dog::setIdea(std::string idea, int start, int end) {
    _brain->setIdea(idea, start, end);
}
