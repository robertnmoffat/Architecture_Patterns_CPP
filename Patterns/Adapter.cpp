#include"../Headers/Adapter.h"
#include"../Headers/IntGenerator.h"
#include"../Headers/StrIntGenerator.h"
#include"../Headers/IntRequestor.h"
#include"../Headers/StrIntAdapter.h"
#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Adapter::Adapter(){};
Adapter::~Adapter(){};

void Adapter::demoPattern(){
    cout << "Adapter Pattern:" << endl << endl;
    cout << "is meant to facilitate interfacing between two incompatible objects." << endl;
    cout << "An example would be an adapter that takes in xml and converts it to json for an existing class which accepts json." << endl;
    cout << endl;
    cout << "For this example an object outputting integer string names will use an adapter to be passed to an IntRequestor object." << endl;

    //Initializing random number generator
    srand((unsigned)time(NULL));

    cout << "--Passing IntGenerator to IntRequestor--" << endl;
    IntGenerator* gen = new IntGenerator();
    IntRequestor* req = new IntRequestor(gen);
    delete req;
    
    cout << "--Example of string generation--" << endl;
    StrIntGenerator* sgen = new StrIntGenerator();
    sgen->produceInt();

    cout << "--Passing StrIntGenerator to StrIntAdapter, then passing the adapter to IntRequestor--" << endl;
    StrIntAdapter* adapter = new StrIntAdapter(sgen);
    IntRequestor* req2 = new IntRequestor(adapter);
    delete req2;
};