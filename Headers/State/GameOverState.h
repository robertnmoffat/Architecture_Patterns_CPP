#ifndef GAMEOVERSTATE_H
#define GAMEOVERSTATE_H
#include"GameState.h"
#include<iostream>

using namespace std;

class GameOverState : public GameState{
    public:
        GameOverState();
        ~GameOverState();

        void showScreen();
};


#endif