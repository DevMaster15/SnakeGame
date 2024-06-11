#include "./snake.h"
#include <cstdlib>
#include <ncurses.h>

int Snake::getHeadX(){
    return this->headX;
}

int Snake::getHeadY(){
    return this->headY;
}

char Snake::getHead(){
    return this->head;
}
