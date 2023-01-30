#include"../Pattern.h"
#include"House.h"

class Builder : public Pattern{
    public:
        Builder();
        virtual ~Builder();
        void demoPattern();

        Builder* withDoors(int amount);
        Builder* withWalls(int amount);
        Builder* withWindows(int amount);
        House* getResult();

    private:
        House* house;
};