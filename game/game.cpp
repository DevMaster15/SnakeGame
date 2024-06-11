#include <iostream>
#include <string>
#include <cstdlib>
#include <csignal>
#include <thread>
#include <chrono>

#include "./game.h"
#include "../snake/snake.h"


void Game::setUp(){
    area = new std::string* [20];

    for (int i = 0; i < 20; i++){
        area[i] = new std::string[20];
    }

    this->drawBoard();
   
}


void Game::refresh(){
    do{
        std::system("clear");
        this->setUp();
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));  //sleep for 1s 
    } while(!gameOver);
}

void Game::drawBoard(){
    Snake snake = Snake();
    int snakeHeadX = snake.getHeadX();
    int snakeHeadY = snake.getHeadY();

    char head = snake.getHead();

    // draw snake from head
    for(int i=0;i<20;i++) {
        for(int j=0;j<20;j++){
            if(i==0 || i==19 || j== 0 || j == 19){
                area[i][j] = '*';
            } else if (i==snakeHeadX && j==snakeHeadY) {
                area[i][j] = head;
            } else {
                area[i][j] = ' ';
            }
        }
        }

    for(int i=0;i<20;++i) {
        for(int j=0;j<20;++j){
            std::cout << area[i][j];
        }
        std::cout<<std::endl;
    }   
}