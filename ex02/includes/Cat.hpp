#ifndef CAT_HPP
#define CAT_HPP

#include <Animal.hpp>
#include <Brain.hpp>

class Cat : public Animal {
    private:
        Brain *_brain{};
    public:
        Cat();
        ~Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &src);
        void makeSound();
        const std::string getIdea(int index) const;
        void setIdea(std::string idea, int start, int end);
        
};





#endif