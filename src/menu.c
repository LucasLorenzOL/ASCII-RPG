#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "universal.h"

int Menu() {

    int option = -1;

    while(option < 0 || option > 1) {
        system(CLEAR);
        printf("/*\n");
        printf(" *      /$$$$$$         /$$$$$$         /$$$$$$        /$$$$$$       /$$$$$$\n");
        printf(" *     /$$__  $$       /$$__  $$       /$$__  $$      |_  $$_/      |_  $$_/\n");
        printf(" *    | $$  \\ $$      | $$  \\__/      | $$  \\__/        | $$          | $$ \n");
        printf(" *    | $$$$$$$$      |  $$$$$$       | $$              | $$          | $$ \n");
        printf(" *    | $$__  $$       \\____  $$      | $$              | $$          | $$ \n");
        printf(" *    | $$  | $$       /$$  \\ $$      | $$    $$        | $$          | $$ \n");
        printf(" *    | $$  | $$      |  $$$$$$/      |  $$$$$$/       /$$$$$$       /$$$$$$\n");
        printf(" *    |__/  |__/       \\______/        \\______/       |______/      |______/\n");
        printf(" *\\ \n\n\n\n");

        printf("#include <stdio.h>\n\n\n");
        printf("int main() {\n\n\n");
        printf("\tprintf(\"Hello, World!\\n\");\n\n");
        printf("\tRunGame(); // 0\n");
        printf("\tExit(); // 1\n\n");
        printf("\treturn 0;\n\n");
        printf("}\n\n");

        printf("Select function [0-1]: ");
        scanf("%d", &option);
    }

    return option;
}