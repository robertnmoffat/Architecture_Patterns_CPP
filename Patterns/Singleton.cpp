#include"../Headers/Singleton/Singleton.h"
#include"../Headers/Singleton/FakeDB.h"
#include<iostream>

using namespace std;

Singleton::Singleton(){};
Singleton::~Singleton(){};

void Singleton::demoPattern(){
    cout << "Singleton Pattern:" << endl << endl;
    cout << "The Singleton pattern ensures that only one single object can exist at runtime of the Singleton class." << endl;
    cout << "This is achieved through the use of a private constructor and private static reference to the single object." << endl;
    cout << "In this example a FakeDB class is made as a Singleton. Instead of calling new FakeDB() which is private, the user must use FakeDB::getInstance() which restricts the class to a single object." << endl << endl;

    cout << "After assigning the return of FakeDB::getInstance() to two separate pointers we get: " << endl;
    FakeDB* db = FakeDB::getInstance();
    FakeDB* db2 = FakeDB::getInstance();

    cout << "DB1 mem address: " << db << endl;
    cout << "DB2 mem address: " << db2 << endl;
    cout << "Which shows that both pointers are referencing the same memory address, and so the same object." << endl;

}