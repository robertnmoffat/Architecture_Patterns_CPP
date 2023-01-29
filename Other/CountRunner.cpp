#include"../Headers/CountRunner.h"

CountRunner::CountRunner(){}
CountRunner::~CountRunner(){}

void CountRunner::setCounter(HundredStrategy* strat){
    this->strat = strat;
}

void CountRunner::runStrat(){
    strat->countTo100();
}