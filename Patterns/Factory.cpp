#include "../Headers/Factory/Factory.h"
#include "../Headers/Factory/Dog.h"
#include "../Headers/Factory/Cat.h"
#include <iostream>

using namespace std;


Factory::Factory(){}
Factory::~Factory(){}

Animal* Factory::getAnimal(string name){
    if(name.compare("Cat")==0){
        return new Cat();
    }
    if(name.compare("Dog")==0){
        return new Dog();
    }
    return nullptr;
}

void Factory::demoPattern() {
        cout << "Factory Pattern:" << endl << endl
             << "The factory pattern hides the creation of objects within a factory class. The factory returns an interface instantiated as a concrete class." << endl << endl;
        
        cout << "Requesting 'Cat' object from factory..." << endl;
        Animal* cat = this->getAnimal("Cat");
        cout << "Calling .makeSound() on returned Animal..." << endl;
        cat->makeSound();

        cout << "Requesting 'Dog' object from factory..." << endl;
        Animal* dog = this->getAnimal("Dog");
        cout << "Calling .makeSound() on returned Animal..." << endl;
        dog->makeSound();
    }
