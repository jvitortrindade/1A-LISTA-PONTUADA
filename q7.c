#include <stdio.h>

int main() {

    int N;

    do {
        printf("Digite o tamanho da espiral: ");
        scanf("%d", &N);
    } while(N < 3);

    int matriz[50][50];

    int topo = 0;
    int baixo = N - 1;
    int esquerda = 0;
    int direita = N - 1;

    int num = 1;
    int i;

    while(num <= N * N) {

        for(i = esquerda; i <= direita; i++)
            matriz[topo][i] = num++;

        topo++;

        for(i = topo; i <= baixo; i++)
            matriz[i][direita] = num++;

        direita--;

        for(i = direita; i >= esquerda; i--)
            matriz[baixo][i] = num++;

        baixo--;

        for(i = baixo; i >= topo; i--)
            matriz[i][esquerda] = num++;

        esquerda++;
    }

    for(i = 0; i < N; i++) {

        int j;

        for(j = 0; j < N; j++)
            printf("%4d", matriz[i][j]);

        printf("\n");
    }

    return 0;
}