#include"../Headers/MessageListener.h"
#include<iostream>

using namespace std;

MessageListener::MessageListener(){}
MessageListener::~MessageListener(){}

void MessageListener::update(std::string msg){
    cout << "MessageListener: updated by Publisher with message: '" << msg << "'" << endl;
}