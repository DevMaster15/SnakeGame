#include <iostream>
#include "game/game.h"

int main(){
    std::cout << "Setup game..." << std::endl;

    Game game = Game();

    int dim;

    do {
        std::cout << "Choose dimensions (20,30,40): ";
        std::cin >> dim;

        if (dim != 20 && dim != 30 && dim != 40) {
            std::cout << "Wrong dimension; you can choose one of these (20,30,40): ";
        }
    } while(dim != 20 && dim != 30 && dim != 40);

    game.setDimension(dim);
    game.refresh();
}