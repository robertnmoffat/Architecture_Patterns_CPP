#ifndef SINGLETON_H
#define SINGLETON_H
#include"../Pattern.h"

class Singleton : public Pattern {
    public:
        Singleton();
        virtual ~Singleton();

        void demoPattern();
};

#endif