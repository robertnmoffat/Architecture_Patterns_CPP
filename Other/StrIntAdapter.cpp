#include"../Headers/StrIntAdapter.h"
#include<string>
#include<iostream>

using namespace std;

StrIntAdapter::StrIntAdapter(StrIntGenerator* gen){
    this->gen = gen;
}
StrIntAdapter::~StrIntAdapter(){}

int StrIntAdapter::produceInt(){
    int num;
    string strnum = gen->produceInt();
    cout << "StrIntAdapter converting string: " << strnum;
    if(strnum.compare("Zero")==0){
        num=0;
    }else if(strnum.compare("One")==0){
        num=1;
    }else if(strnum.compare("Two")==0){
        num=2;
    }else if(strnum.compare("Three")==0){
        num=3;
    }else if(strnum.compare("Four")==0){
        num=4;
    }else if(strnum.compare("Five")==0){
        num=5;
    }else if(strnum.compare("Six")==0){
        num=6;
    }else if(strnum.compare("Seven")==0){
        num=7;
    }else if(strnum.compare("Eight")==0){
        num=8;
    }else if(strnum.compare("Nine")==0){
        num=9;
    }
    cout << " to integer: " << num << endl;
    return num;
}