
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"
#include "screen.h"
#include "keyboard.h"

int main() {
    char nome[50];
    int num_virus;

    srand(time(NULL));
    screenInit(1);
    keyboardInit();

    screenSetColor(CYAN, BLACK);
    printf("Digite seu nome: ");
    scanf("%49s", nome);

    do {
        printf("\nQuantidade de vírus (1 a 8): ");
        scanf("%d", &num_virus);
    } while (num_virus < 1 || num_virus > 8);

    startGame(nome, num_virus);

    keyboardDestroy();
    screenDestroy();
    return 0;
}
