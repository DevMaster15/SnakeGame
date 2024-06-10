#ifndef GAME_H
#define GAME_H

class Game {
    private:
        int score = 0;
        int gameOver = false;
        int height;
        int width;
    public:
        Game(int h, int w);
        int getScore();
        int getHeight();
        int getWidth();
        void setUp();
};
#endif