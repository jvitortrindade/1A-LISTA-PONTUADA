#include <stdio.h>

int main() {

    int B, L, A;
    int i, j, espacos;

    do {
        printf("Base da arvore (impar >=3): ");
        scanf("%d", &B);
    } while(B < 3 || B % 2 == 0);

    do {
        printf("Largura do tronco (impar <= Base/2): ");
        scanf("%d", &L);
    } while(L < 1 || L % 2 == 0 || L > B/2);

    do {
        printf("Altura da arvore (>=2 e <= Base/2): ");
        scanf("%d", &A);
    } while(A < 2 || A > B/2);

    for(i = 1; i <= B; i += 2) {

        espacos = (B - i) / 2;

        for(j = 0; j < espacos; j++)
            printf(" ");

        for(j = 0; j < i; j++)
            printf("*");

        printf("\n");
    }

    espacos = (B - L) / 2;

    for(i = 0; i < A; i++) {

        for(j = 0; j < espacos; j++)
            printf(" ");

        for(j = 0; j < L; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}