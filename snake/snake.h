#ifndef SNAKE_H
#define SNAKE_H
#include <vector>

class Snake {
    private: 
        int headX = 1;
        int headY = 1;
        std::vector<int> bodyX;  // body orizzontale
        std::vector<int> bodyY;  // body verticale
        char head = 'O', body = 'o';
    public:
        int getHeadX();
        int getHeadY();
        char getHead();
};

#endif