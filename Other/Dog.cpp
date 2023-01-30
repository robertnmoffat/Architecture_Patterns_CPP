#include"../Headers/Factory/Dog.h"
#include<iostream>

using namespace std;

Dog::Dog(){};
Dog::~Dog(){};

void Dog::makeSound(){
    cout << "Woof" << endl;
}