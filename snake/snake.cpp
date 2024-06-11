#include "snake.h"
#include <cstdlib>
#include <ncurses.h>

enum eDirections {
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};

eDirections dir;

Snake::Snake(int headX, int headY, int tailX, int tailY) : headX(headX), headY(headY), tailX(tailX), tailY(tailY) {}

void Snake::move(){
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    
    int ch;

    int prevX = this->getTailX();
    int prevY = this->getTailY();

    while ((ch = getch()) != 'q') { // Premi 'q' per uscire
        switch(ch) {
            case KEY_UP:
                
                break;
            case KEY_DOWN:
                // Logica per muovere il serpente in giù
                break;
            case KEY_LEFT:
                // Logica per muovere il serpente a sinistra
                break;
            case KEY_RIGHT:
                // Logica per muovere il serpente a destra
                break;
        }
        // Altra logica per il gioco
    }
    endwin();
}