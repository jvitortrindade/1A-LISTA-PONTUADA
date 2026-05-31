#include <stdio.h>

int main() {

    int altura;
    int linha, coluna;
    int pascal[20][20];

    printf("Altura: ");
    scanf("%d", &altura);

    for(linha = 0; linha < altura; linha++) {

        for(coluna = 0; coluna <= linha; coluna++) {

            if(coluna == 0 || coluna == linha)
                pascal[linha][coluna] = 1;
            else
                pascal[linha][coluna] =
                pascal[linha-1][coluna-1] +
                pascal[linha-1][coluna];
        }
    }

    for(linha = 0; linha < altura; linha++) {

        for(coluna = 0; coluna <= linha; coluna++)
            printf("%4d", pascal[linha][coluna]);

        printf("\n");
    }

    return 0;
}