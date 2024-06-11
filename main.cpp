#include <iostream>
#include "game/game.h"

int main(){
    std::cout << "Setup game..." << std::endl;
    Game game = Game(400, 400);
    return 0;
}