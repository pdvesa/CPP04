#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include <AMateria.hpp>

class Cure : public AMateria {
    private:
        const std::string type;
    public:
        Cure(std::string const &type);
        ~Cure();
        Cure(const Cure &src);
        Cure &operator=(const Cure &src);
        std::string const &getType() const;
        Cure *clone() const = 0;
        void use(ICharacter &target);
};

#endif