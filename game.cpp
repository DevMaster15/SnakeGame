#include <iostream>
#include "game.h"

Game::Game(int h, int w) : height(h), width(w) {}

int Game::getHeight(){
    return height;
}

int Game::getWidth(){
    return width;
}

int Game::getScore(){
    return score;
}

void Game::setUp(){
    // darw snake... 
}