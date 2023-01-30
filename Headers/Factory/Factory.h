#ifndef FACTORY_H
#define FACTORY_H
#include "../Pattern.h"
#include "Animal.h"
#include <iostream>
#include<string>

using namespace std;

class Factory : public Pattern
{
public:
    Factory();
    virtual ~Factory();
    void demoPattern();
    Animal* getAnimal(string name);
};
#endif