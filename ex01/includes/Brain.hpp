#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
    private:
        std::string _ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &src);
        Brain &operator=(const Brain &src);
        const std::string getIdea(int index) const;
        void setIdea(std::string &idea, int start, int end);
};





#endif