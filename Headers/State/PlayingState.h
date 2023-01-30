#ifndef PLAYINGSTATE_H
#define PLAYINGSTATE_H
#include"GameState.h"

class PlayingState : public GameState{
    public:
        PlayingState();
        ~PlayingState();

        void showScreen();
};


#endif