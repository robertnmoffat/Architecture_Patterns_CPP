#ifndef PATTERN_H
#define PATTERN_H

class Pattern{
    public:
        Pattern(){};
        virtual ~Pattern();
        virtual void demoPattern()=0;
};
#endif