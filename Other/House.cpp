#include"../Headers/House.h"
#include<iostream>

using namespace std;

void House::setDoors(int amount){
    doors = amount;
}
void House::setWalls(int amount){
    walls = amount;
}
void House::setWindows(int amount){
    windows = amount;
}

int House::getDoors(){
    return doors;
}
int House::getWalls(){
    return walls;
}
int House::getWindows(){
    return windows;
}

void House::printTraits(){
    cout << "This house has: ";
    if(doors){
        cout << doors << " doors, ";
    }
    if(walls){
        cout << walls << " walls, ";
    }
    if(windows){
        cout << windows << " windows.";
    }
    cout << endl;
}