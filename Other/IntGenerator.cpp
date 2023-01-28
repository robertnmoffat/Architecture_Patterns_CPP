#include"../Headers/IntGenerator.h"
#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

IntGenerator::IntGenerator(){};
IntGenerator::~IntGenerator(){};

int IntGenerator::produceInt(){
    int num = (rand()%10);
    cout << "IntGenerator producing random int: " << num << endl;
    return num;
};