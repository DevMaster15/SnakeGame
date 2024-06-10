#ifndef SNAKE_H
#define SNAKE_H


class Snake {
    private: 
        int headX;
        int headY;
        int tailX;
        int tailY;
    public:
        int getHeadX();
        int getHeadY();
        int getTailX();
        int getTailY();
        void setX();
        void setY();
        void move();
};

#endif