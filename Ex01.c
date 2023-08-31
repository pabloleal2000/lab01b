#include <stdio.h>

int main() {
    int n; // Tamanho da matriz (n x n)
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &n);

    int matriz[n][n];
    
    // Leitura da matriz
    for (int i = 0; i < n; i++) {
        printf("Digite os elementos da linha %d: ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Encontrar a linha com o menor valor
    int menorValor = matriz[0][0];
    int linhaMenorValor = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] < menorValor) {
                menorValor = matriz[i][j];
                linhaMenorValor = i;
            }
        }
    }

    // Imprimir o número da linha com o menor valor
    printf("A linha com o menor valor é a linha %d.\n", linhaMenorValor + 1);

    return 0;
}
