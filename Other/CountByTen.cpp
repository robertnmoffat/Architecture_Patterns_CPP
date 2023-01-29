#include "../Headers/CountByTen.h"
#include<iostream>

using namespace std;

CountByTen::CountByTen() {}
CountByTen::~CountByTen() {}

void CountByTen::countTo100()
{
    cout << "Counting to 100 by 10:" << endl;
    for(int i=0; i<=100; i+=10){
        cout << i << ",";
    }
    cout << endl;
}