#include"Subscriber.h"
#include<vector>

using namespace std;

class Publisher {
    public:
        Publisher();
        ~Publisher();

        void subscribe(Subscriber* s);
        void unSubscribe(Subscriber* s);
        void notifySubscribers();

    private:
        vector<Subscriber*> subscribers;
};