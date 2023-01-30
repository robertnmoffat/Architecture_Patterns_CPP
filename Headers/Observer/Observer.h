#ifndef OBSERVER_H
#define OBSERVER_H
#include"../Pattern.h"

class Observer : public Pattern{
    public:
        Observer();
        ~Observer();

        void demoPattern();
};

#endif