#include"../Headers/State/PlayingState.h"
#include<iostream>

using namespace std;

PlayingState::PlayingState(){}
PlayingState::~PlayingState(){}

void PlayingState::showScreen(){
    cout << "PlayingState: Showing gameplay screen." << endl;
}