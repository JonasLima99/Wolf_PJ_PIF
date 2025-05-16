#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

char campo_real[4][4];
char visao_jogador[4][4];

// Criei essa função para que seja adicionado um espaço em branco em cada linha e coluna da matriz.
void inicializar_campo_real () {

    for (int i=0; i < 4; i++) {
        for(int j=0; j < 4; j++) {
            campo_real[i][j] = ' ';
        }
    }
}

//Agora, precio criar uma função de teste, para confirmar se a matriz foi inicializada corretamente.

void teste_inicializar_campo_real () {

    for (int i=0; i < 4; i++) {
        for(int j=0; j < 4; j++) {
            printf("| %c ", campo_real[i][j]);;
        }
        printf("\n");
        printf("--------------\n");
    }
}

//Com a matriz inicializada, vou criar a próxima função para esconder alguns virus no campo de jogo.

void sortear_virus () {

    int qtd_virus = 4;
    int contador = 0;

    while (contador < qtd_virus) {

        int linha = rand() % 4;
        int coluna = rand() % 4;

        if (campo_real[linha][coluna] == ' ') {
            campo_real[linha][coluna] = 'V';
            contador++;
        }

    }
    
}

//Agora, preciso criar o painel de visão do jogador, e ele não pode visualizar onde está o vírus...

void inicializar_visao_jogador () {

    for (int i=0; i < 4; i++) {
        for(int j=0; j < 4; j++) {
            visao_jogador[i][j] = 'x';
        }
    }
}

//Agora, precio criar uma função de teste, para confirmar se a visão do jogador foi inicializada corretamente, sem que ele visualize onde estão os vírus.

void teste_visao_jogador () {

    for (int i=0; i < 4; i++) {
        for(int j=0; j < 4; j++) {
            printf("| %c ", visao_jogador[i][j]);;
        }
        printf("\n");
        printf("--------------\n");
    }
}

int main() {
   
    inicializar_campo_real ();
    teste_inicializar_campo_real ();

    printf(" \n");
    printf("--------------APOS INSERIR O VIRUS--------------\n");
    printf(" \n");

    srand(time(NULL));

    sortear_virus ();
    teste_inicializar_campo_real(); 

    printf(" \n");
    printf("--------------VISAO JOGADOR--------------\n");
    printf(" \n");

    inicializar_visao_jogador ();
    teste_visao_jogador ();

    return 0;
}