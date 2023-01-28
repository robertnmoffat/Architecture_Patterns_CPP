#include "../Headers/StrIntGenerator.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

StrIntGenerator::StrIntGenerator(){}
StrIntGenerator::~StrIntGenerator() {}

string StrIntGenerator::produceInt()
{
    int num = (rand() % 10);
    string numStr;
    switch (num)
    {
    case 0:
        numStr = "Zero";
        break;
    case 1:
        numStr = "One";
        break;
    case 2:
        numStr = "Two";
        break;
    case 3:
        numStr = "Three";
        break;
    case 4:
        numStr = "Four";
        break;
    case 5:
        numStr = "Five";
        break;
    case 6:
        numStr = "Six";
        break;
    case 7:
        numStr = "Seven";
        break;
    case 8:
        numStr = "Eight";
        break;
    case 9:
        numStr = "Nine";
        break;
    }
    cout << "StrIntGenerator producing random int string: " << numStr << endl;
    return numStr;
}