#include <iostream>
#include <string>
#include <cstdlib>
#include <csignal>
#include <thread>
#include <chrono>

#include "./game.h"
#include "../snake/snake.h"


void Game::setUp(){
    int dimension = this->getDimension();
    area = new std::string* [dimension];

    for (int i = 0; i < dimension; i++){
        area[i] = new std::string[dimension];
    }

    this->drawBoard(dimension);
   
}


void Game::refresh(){
    do{
        std::system("clear");
        this->setUp();
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));  //sleep for 1s 
    } while(!gameOver);
}

void Game::drawBoard(int dim){
    Snake snake = Snake();
    int snakeHeadX = snake.getHeadX();
    int snakeHeadY = snake.getHeadY();

    char head = snake.getHead();

    // draw snake from head
    for(int i=0;i<dim;i++) {
        for(int j=0;j<dim;j++){
            if(i==0 || i==dim-1 || j== 0 || j == dim-1){
                area[i][j] = '*';
            } else if (i==snakeHeadX && j==snakeHeadY) {
                area[i][j] = head;
            } else {
                area[i][j] = ' ';
            }
        }
        }

    for(int i=0;i<dim;++i) {
        for(int j=0;j<dim;++j){
            std::cout << area[i][j];
        }
        std::cout<<std::endl;
    }   
}


void Game::setDimension(int d){
    dimension = d;
}


int Game::getDimension(){
    return dimension;
}