#ifndef INTREQUESTOR_H
#define INTREQUESTOR_H
#include"IntGenerator.h"

class IntRequestor {
    public:
        IntRequestor(IntGenerator* gen);
        ~IntRequestor();
};

#endif