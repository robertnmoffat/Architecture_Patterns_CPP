#ifndef STRINTADAPTER_H
#define STRINTADAPTER_H
#include"StrIntGenerator.h"
#include"IntGenerator.h"

class StrIntAdapter : public IntGenerator{
    public:
        StrIntAdapter(StrIntGenerator* gen);
        ~StrIntAdapter();

        int produceInt();
    private:
        StrIntGenerator* gen;
};

#endif