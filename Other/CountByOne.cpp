#include"../Headers/CountByOne.h"
#include<iostream>

using namespace std;

CountByOne::CountByOne(){}
CountByOne::~CountByOne(){}

void CountByOne::countTo100(){
    cout << "Counting to 100 by 1:" << endl;
    for(int i=0; i<=100; i++){
        cout << i << ",";
    }
    cout << endl;
}