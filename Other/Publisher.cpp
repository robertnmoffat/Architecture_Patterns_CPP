#include"../Headers/Publisher.h"
#include<iostream>
#include<string>

using namespace std;

Publisher::Publisher(){}
Publisher::~Publisher(){}

void Publisher::notifySubscribers(){
    string msg = "notification text from Publisher";

    cout << "Publisher: Notifying all Subscribers with message: '" << msg << "'" << endl;
    for(int i=0; i<subscribers.size(); i++){
        subscribers[i]->update(msg);
    }
}

void Publisher::subscribe(Subscriber* s){
    cout << "Publisher: Adding Subscriber to array." << endl;
    subscribers.push_back(s);
}

void Publisher::unSubscribe(Subscriber* s){
    cout << "Publisher: Removing Subscriber from array." << endl;
    int pos = -1;
    for(int i=0; i<subscribers.size(); i++){
        if(subscribers[i]==s){
            pos = i;
            break;
        }
    }
    if(pos!=-1){
        subscribers.erase(subscribers.begin()+pos);
    }else{
        cout << "Couldn't find Subscriber." << endl;
    }
}