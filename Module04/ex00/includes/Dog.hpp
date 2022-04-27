#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public:
	 Dog();
	 virtual ~Dog();
	 Dog(const Dog& origin);
	 Dog& operator=(const Dog& other);

	 virtual void makeSound() const;
};

#endif