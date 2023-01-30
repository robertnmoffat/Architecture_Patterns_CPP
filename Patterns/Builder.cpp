#include"../Headers/Builder/Builder.h"
#include"../Headers/Builder/House.h"
#include<iostream>

using namespace std;

Builder::Builder(){
    house = new House();
};
Builder::~Builder(){};

Builder* Builder::withDoors(int amount){
    house->setDoors(amount);
    return this;
}
Builder* Builder::withWalls(int amount){
    house->setWalls(amount);
    return this;
}
Builder* Builder::withWindows(int amount){
    house->setWindows(amount);
    return this;
}
House* Builder::getResult(){
    return house;
}

void Builder::demoPattern(){
    cout << "Builder Pattern:" << endl << endl;
    cout << "The builder pattern assists in creating objects which would otherwise require overly complex parameters to intantiate." << endl;
    cout << "This is done by calling methods to set whichever parameters are required and then requesting the resulting object created by the Builder." << endl << endl;
    cout << "Creating house: House* house = builder->withDoors(2)->withWalls(4)->withWindows(3)->getResult();" << endl;
    Builder* builder = new Builder();
    House* house = builder->withDoors(2)->withWalls(4)->withWindows(3)->getResult();
    cout << "Returned house results in: " << endl;
    house->printTraits();
}