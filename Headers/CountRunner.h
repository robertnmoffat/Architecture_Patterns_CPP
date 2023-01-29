#include"HundredStrategy.h"

class CountRunner{
    public:
        CountRunner();
        ~CountRunner();

        void setCounter(HundredStrategy* strat);
        void runStrat();
    private:
        HundredStrategy* strat;
};