#include "menu.h"
#include "game.h"

int main() {

    int option;

    option = Menu();

    if(!option)
        gameLoop();

    return 0;
}