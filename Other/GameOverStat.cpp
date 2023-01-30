#include"../Headers/State/GameOverState.h"
#include<iostream>

using namespace std;

GameOverState::GameOverState(){}
GameOverState::~GameOverState(){}

void GameOverState::showScreen(){
    cout << "GameOverState: Showing game over screen." << endl;
}