#ifndef CAT_H
#define CAT_H

#include"Animal.h"

class Cat : public Animal {
    public:
        Cat();
        virtual ~Cat();
        void makeSound();
};
#endif