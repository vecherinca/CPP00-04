#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
class Dog: public AAnimal
{
private:
    Brain *brain;
public:
    Dog& operator=( const Dog& csl);
    Dog( const Dog& cls );
    Dog( void );
    ~Dog( void );
    void makeSound() const;
    void setIdea(const int& index, const std::string& idea);
    void displayIdeas();
    


};
#endif