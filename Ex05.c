#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    // Leitura da matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int numero;
    printf("Digite o número para multiplicar a linha e a coluna: ");
    scanf("%d", &numero);

    int linha, coluna;

    printf("Digite o número da linha a ser multiplicada (0 a %d): ", linhas - 1);
    scanf("%d", &linha);

    printf("Digite o número da coluna a ser multiplicada (0 a %d): ", colunas - 1);
    scanf("%d", &coluna);

    // Multiplicação da linha
    for (int j = 0; j < colunas; j++) {
        matriz[linha][j] *= numero;
    }

    // Multiplicação da coluna
    for (int i = 0; i < linhas; i++) {
        matriz[i][coluna] *= numero;
    }

    // Impressão da matriz resultante
    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
