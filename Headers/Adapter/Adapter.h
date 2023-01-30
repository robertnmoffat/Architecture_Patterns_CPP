#ifndef ADAPTER_H
#define ADAPTER_H
#include"../Pattern.h"

class Adapter : public Pattern{
    public:
        Adapter();
        virtual ~Adapter();
        void demoPattern();
};

#endif