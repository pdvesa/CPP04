#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include <AMateria.hpp>

class Ice : public AMateria {
    private:
        const std::string type;
    public:
        Ice(std::string const &type);
        ~Ice();
        Ice(const Ice &src);
        Ice &operator=(const Ice &src);
        std::string const &getType() const;
        Ice *clone() const = 0;
        void use(ICharacter &target);
};


#endif