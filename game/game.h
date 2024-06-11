#ifndef GAME_H
#define GAME_H
#include <string>

class Game {
    private:
        int score = 0;
        int gameOver = false;
        std::string** area;
    public:
        void setUp();
        void drawBoard();
        void refresh();
};
#endif