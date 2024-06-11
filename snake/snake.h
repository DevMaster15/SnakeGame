#ifndef SNAKE_H
#define SNAKE_H
#include <vector>

class Snake {
    private: 
        int headX = 0;
        int headY = 0;
        std::vector<int> bodyX;  // body orizzontale
        std::vector<int> bodyY;  // body verticale
        char head = 'O', body = 'o';

    public:
        Snake();
        int getHeadX();
        int getHeadY();
};

#endif