#include"../Headers/Singleton/FakeDB.h"

FakeDB* FakeDB::instance = nullptr;

FakeDB::FakeDB(){}
FakeDB::~FakeDB(){
    delete FakeDB::instance;
}

FakeDB* FakeDB::getInstance(){
    if(FakeDB::instance==nullptr){
        FakeDB::instance=new FakeDB();
    }
    return FakeDB::instance;
}