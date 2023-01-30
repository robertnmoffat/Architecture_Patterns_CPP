#include"../Headers/State/Game.h"
#include"../Headers/State/MenuState.h"
#include<iostream>

using namespace std;

Game::Game(){
    currentState = new MenuState();
};
Game::~Game(){
    delete currentState;
}

void Game::setState(GameState* state){
    cout << "Game: Switching state." << endl;
    delete this->currentState;
    this->currentState = state;
}
void Game::printScreen(){
    cout << "Game: Printing current screen." << endl;
    currentState->showScreen();
}