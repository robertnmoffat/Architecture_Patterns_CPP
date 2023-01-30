#include"../Headers/Factory/Cat.h"
#include<iostream>

using namespace std;

Cat::Cat(){};
Cat::~Cat(){};

void Cat::makeSound(){
    cout << "Meow" << endl;
};