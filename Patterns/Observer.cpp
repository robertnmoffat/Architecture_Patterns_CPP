#include"../Headers/Observer.h"
#include"../Headers/Publisher.h"
#include"../Headers/MessageListener.h"
#include<iostream>

using namespace std;

Observer::Observer(){}
Observer::~Observer(){}

void Observer::demoPattern(){
    cout << "Observer Pattern:" << endl;
    cout << "Observer pattern allows a Publisher object to send updates to a list of Subscriber objects." << endl;
    cout << "This ensures that only the objects interested in a given event can become notified." << endl;
    cout << "In this simple example there is only one Publisher, but a real example may use a Publisher interface with many different Publisher implementations for different events." << endl;
    cout << "The subscribers can then pick and choose which events they are interested in being notified about." << endl << endl;

    cout << "Instantiating MessageListener implementation of Subscriber..." << endl;
    Subscriber* listener1 = new MessageListener();
    cout << "Instantiating MessageListener implementation of Subscriber..." << endl;
    Subscriber* listener2 = new MessageListener();

    cout << "Instantiating Publisher..." << endl;
    Publisher* pub = new Publisher();
    cout << "Subscribing listener1..." << endl;
    pub->subscribe(listener1);
    cout << "Subscribing listener2..." << endl;
    pub->subscribe(listener2);

    pub->notifySubscribers();

    cout << "Unsibscribing listener1..." << endl;
    pub->unSubscribe(listener1);

    pub->notifySubscribers();

    delete pub,listener1,listener2;
}