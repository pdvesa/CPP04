#include <Brain.hpp>

Brain::Brain() {
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
} //apparently better would be loop, idk

Brain &Brain::operator=(const Brain &src) {
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this == &src)
		return (*this);
    for (int i = 0 ; i < 100 ; i++)
	    _ideas[i] = src._ideas[i];
	return (*this);
}

const std::string Brain::getIdea(int index) const {
    if (index < 0 || index > 99)
        return ("Nice try\n");
    return (_ideas[index]);
}

void Brain::setIdea(std::string &idea, int start, int end) {
    if (start < 0 || end > 100 ||  end <= start) {
        std::cout << "I CBA to validate all you trash input" << std::endl;
        return ;
    }
    for (int i = start ; i < end ; i++) {
        _ideas[i] = idea;
    }
}