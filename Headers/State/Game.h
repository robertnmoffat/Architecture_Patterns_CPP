#ifndef GAME_H
#define GAME_H
#include"GameState.h"

class Game{
    public:
        Game();
        ~Game();

        void setState(GameState* currentState);
        void printScreen();
    private:
        GameState* currentState;
};
#endif