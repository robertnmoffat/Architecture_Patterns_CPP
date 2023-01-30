#include"../Headers/Strategy/CountByTwentyFive.h"
#include<iostream>

using namespace std;

CountByTwentyFive::CountByTwentyFive(){}
CountByTwentyFive::~CountByTwentyFive(){}

void CountByTwentyFive::countTo100(){
    cout << "Counting to 100 by 25:" << endl;
    for(int i=0; i<=100; i+=25){
        cout << i << ", ";
    }
    cout << endl;
}