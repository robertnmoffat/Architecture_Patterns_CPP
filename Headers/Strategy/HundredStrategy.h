#ifndef HUNDREDSTRATEGY_H
#define HUNDREDSTRATEGY_H

class HundredStrategy {
    public:
        HundredStrategy();
        virtual ~HundredStrategy();
        virtual void countTo100()=0;
};

#endif