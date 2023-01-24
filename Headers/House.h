#ifndef HOUSE_H
#define HOUSE_H
class House {
    public:
        void printTraits();
        void setWalls(int amount);
        void setDoors(int amount);
        void setWindows(int amount);
        int getWalls();
        int getDoors();
        int getWindows();
    private:
        int walls, doors, windows;
};
#endif