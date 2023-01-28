#include"../Headers/IntRequestor.h"
#include<iostream>

using namespace std;

IntRequestor::IntRequestor(IntGenerator* gen){
    cout << "New IntRequestor requesting int..." << endl;
    int num = gen->produceInt();
    cout << "Int received: " << num << endl;
};
IntRequestor::~IntRequestor(){};