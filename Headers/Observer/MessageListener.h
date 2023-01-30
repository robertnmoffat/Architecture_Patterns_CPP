#ifndef MESSAGElISTENER_H
#define MESSAGElISTENER_H
#include"Subscriber.h"
#include<string>

class MessageListener : public Subscriber{
    public:
        MessageListener();
        ~MessageListener();

        void update(std::string msg);
};
#endif