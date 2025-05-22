
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "game.h"
#include "screen.h"
#include "keyboard.h"

#define TAM 4

typedef struct {
    int revelado;
    int virus;
} Celula;

Celula** criarTabuleiro() {
    Celula** tabuleiro = malloc(TAM * sizeof(Celula*));
    for (int i = 0; i < TAM; i++) {
        tabuleiro[i] = malloc(TAM * sizeof(Celula));
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j].revelado = 0;
            tabuleiro[i][j].virus = 0;
        }
    }
    return tabuleiro;
}

void liberarTabuleiro(Celula** tabuleiro) {
    for (int i = 0; i < TAM; i++) free(tabuleiro[i]);
    free(tabuleiro);
}

void espalharVirus(Celula** tabuleiro, int quantidade) {
    int colocados = 0;
    while (colocados < quantidade) {
        int i = rand() % TAM;
        int j = rand() % TAM;
        if (!tabuleiro[i][j].virus) {
            tabuleiro[i][j].virus = 1;
            colocados++;
        }
    }
}

void desenharTabuleiro(Celula** tabuleiro, int cursorX, int cursorY) {
    screenClear();
    printf("\n  MINES - VIRUS\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (i == cursorY && j == cursorX) screenSetColor(WHITE, RED);
            else screenSetColor(WHITE, BLACK);

            if (tabuleiro[i][j].revelado) {
                if (tabuleiro[i][j].virus) printf("X ");
                else printf("R ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    screenUpdate();
}

void startGame(const char* nome, int num_virus) {
    Celula** tabuleiro = criarTabuleiro();
    espalharVirus(tabuleiro, num_virus);

    int cursorX = 0, cursorY = 0;
    int pontos = 0;
    int jogando = 1;

    while (jogando) {
        desenharTabuleiro(tabuleiro, cursorX, cursorY);
        screenGotoxy(0, TAM + 4);
        printf("Jogador: %s\t Pontos: %d\n", nome, pontos);
        printf("WASD para mover | ENTER para revelar | Q para sacar\n");

        int tecla = readInput();
        switch (tecla) {
            case 'w': if (cursorY > 0) cursorY--; break;
            case 's': if (cursorY < TAM - 1) cursorY++; break;
            case 'a': if (cursorX > 0) cursorX--; break;
            case 'd': if (cursorX < TAM - 1) cursorX++; break;
            case 10: // ENTER
                if (!tabuleiro[cursorY][cursorX].revelado) {
                    tabuleiro[cursorY][cursorX].revelado = 1;
                    if (tabuleiro[cursorY][cursorX].virus) {
                        desenharTabuleiro(tabuleiro, cursorX, cursorY);
                        printf("\nINFECTADO! Você encontrou um vírus! Pontos perdidos.\n");
                        pontos = 0;
                        jogando = 0;
                    } else {
                        pontos += num_virus;
                    }
                }
                break;
            case 'q':
                jogando = 0;
                break;
        }
    }

    FILE* f = fopen("ranking.txt", "a");
    if (f) {
        fprintf(f, "%s %d\n", nome, pontos);
        fclose(f);
    }

    screenGotoxy(0, TAM + 5);
    printf("\nJogo encerrado. Pontuação final: %d\n", pontos);
    printf("Ranking:\n");

    f = fopen("ranking.txt", "r");
    if (f) {
        char line[100];
        while (fgets(line, sizeof(line), f)) {
            printf("%s", line);
        }
        fclose(f);
    }
    printf("\nPressione qualquer tecla para sair...\n");
    getchar(); getchar();
    liberarTabuleiro(tabuleiro);
}
