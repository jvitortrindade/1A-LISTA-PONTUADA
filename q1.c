#include <stdio.h>

int main() {
    int altura, tipo, i, j;

    printf("Altura do quadrado: ");
    scanf("%d", &altura);

    printf("1 - Preenchido\n");
    printf("2 - Vazado\n");
    scanf("%d", &tipo);

    for(i = 0; i < altura; i++) {
        for(j = 0; j < altura; j++) {

            if(tipo == 1)
                printf("*");

            else {
                if(i == 0 || i == altura-1 || j == 0 || j == altura-1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}