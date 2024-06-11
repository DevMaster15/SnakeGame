#ifndef SNAKE_H
#define SNAKE_H


class Snake {
    private: 
        int headX;
        int headY;
        int tailX;
        int tailY;
    public:
        Snake(int headX, int headY, int tailX, int tailY);
        int getHeadX();
        int getHeadY();
        int getTailX();
        int getTailY();
        void setX();
        void setY();
        void move();
};

#endif