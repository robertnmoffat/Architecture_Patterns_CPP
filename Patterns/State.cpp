#include"../Headers/State/State.h"
#include"../Headers/State/Game.h"
#include"../Headers/State/PlayingState.h"
#include"../Headers/State/GameOverState.h"
#include<iostream>

using namespace std;

State::State(){}
State::~State(){}

void State::demoPattern(){
    cout << "State Pattern:" << endl;
    cout << "This pattern assists in creating complex dynamic object states while removing the need for refactoring." << endl;
    cout << "Rather than having a complex switch statement handling state, state is abstracted into objects implementing a shared state interface." << endl;
    cout << "When state of the object needs to be changed, simply pass it the new desired state object." << endl << endl;

    cout << "Instantiating new Game object which defaults to MenuState." << endl;
    Game* game = new Game();
    game->printScreen();
    cout << "Switching game to playing state." << endl;
    game->setState(new PlayingState());
    game->printScreen();
    cout << "Switching game to game over state." << endl;
    game->setState(new GameOverState());
    game->printScreen();
    delete game;
}