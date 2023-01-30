#ifndef STRATEGY_H
#define STRATEGY_H
#include"../Pattern.h"

class Strategy : public Pattern{
    public:
        Strategy();
        ~Strategy();

        void demoPattern();
};


#endif