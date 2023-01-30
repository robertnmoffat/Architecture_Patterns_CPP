#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H
#include<string>

class Subscriber{
    public:
        Subscriber();
        ~Subscriber();

        virtual void update(std::string msg)=0;
};
#endif