#include <stdio.h>

int main() {
    int altura, tipo;
    int i, j;

    printf("Altura: ");
    scanf("%d", &altura);

    printf("1 - Preenchido\n");
    printf("2 - Vazado\n");
    scanf("%d", &tipo);

    for(i = 1; i <= altura; i++) {

        for(j = 1; j <= i; j++) {

            if(tipo == 1)
                printf("*");

            else {
                if(j == 1 || j == i || i == altura)
                    printf("*");
                else
                    printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}