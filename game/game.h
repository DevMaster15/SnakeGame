#ifndef GAME_H
#define GAME_H
#include <string>

class Game {
    private:
        int score = 0;
        int gameOver = false;
        int dimension;
        std::string** area;
    public:
        void setUp();
        void drawBoard(int dim);
        void refresh();
        int getDimension();
        void setDimension(int dim);
};
#endif