#include"../Headers/Strategy/Strategy.h"
#include"../Headers/Strategy/CountByOne.h"
#include"../Headers/Strategy/CountByTen.h"
#include"../Headers/Strategy/CountByTwentyFive.h"
#include"../Headers/Strategy/CountRunner.h"
#include<iostream>

using namespace std;

Strategy::Strategy(){};
Strategy::~Strategy(){};

void Strategy::demoPattern(){
    cout << "Strategy Pattern:" << endl;
    cout << "Strategy pattern is meant to enable the use of multiple classes containing algorithms to solve a similar problem." << endl;
    cout << "To do this, multiple classes implement a strategy interface and handle the solution in their own ways." << endl << endl;

    cout << "This demo implementation contains a HundredStrategy interface which is extended by multiple classes which count to 100 in different ways." << endl;

    cout << "Instantiating CountRunner..." << endl;
    CountRunner* runner = new CountRunner();

    cout << "Setting strategy to CountByOne..." << endl;
    HundredStrategy* one = new CountByOne();
    runner->setCounter(one);
    cout << "Running strategy." << endl;
    runner->runStrat();

    cout << "Setting strategy to CountByTen..." << endl;
    HundredStrategy* ten = new CountByTen();
    runner->setCounter(ten);
    cout << "Running strategy." << endl;
    runner->runStrat();

    cout << "Setting strategy to CountByTwentyFive..." << endl;
    HundredStrategy* tFive = new CountByTwentyFive();
    runner->setCounter(tFive);
    cout << "Running strategy." << endl;
    runner->runStrat();

    delete one,ten,tFive;
};