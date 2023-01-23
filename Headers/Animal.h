#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
    public:
    virtual ~Animal();
    virtual void makeSound()=0;
};
#endif