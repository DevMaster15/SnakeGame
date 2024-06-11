#include <iostream>
#include "game/game.h"

int main(){
    std::cout << "Setup game..." << std::endl;
    Game game = Game();
    game.refresh();
}