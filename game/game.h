#ifndef GAME_H
#define GAME_H
#include <string>
#include "../snake/snake.h"

class Game {
    private:
        int score = 0;
        int gameOver = false;
        int dimension;
        std::string** area;
    public:
        void setUp(Snake snake);
        void drawBoard(int dim, Snake snake);
        void refresh();
        int getDimension();
        void setDimension(int dim);
};
#endif