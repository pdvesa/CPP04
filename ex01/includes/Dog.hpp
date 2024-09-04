#ifndef DOG_HPP
#define DOG_HPP

#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal {
    private:
        Brain *_brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
        void makeSound();
        const std::string getIdea(int index) const;
        void setIdea(std::string idea, int start, int end);
};





#endif