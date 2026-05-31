#include <stdio.h>

int main() {

    int largura, i, j;
    int espacos, estrelas;

    printf("Digite a largura central: ");
    scanf("%d", &largura);

    for(estrelas = 1; estrelas <= largura; estrelas += 2) {

        espacos = (largura - estrelas) / 2;

        for(i = 0; i < espacos; i++)
            printf(" ");

        for(i = 0; i < estrelas; i++)
            printf("X");

        printf("\n");
    }

    for(estrelas = largura - 2; estrelas >= 1; estrelas -= 2) {

        espacos = (largura - estrelas) / 2;

        for(i = 0; i < espacos; i++)
            printf(" ");

        for(i = 0; i < estrelas; i++)
            printf("X");

        printf("\n");
    }

    return 0;
}