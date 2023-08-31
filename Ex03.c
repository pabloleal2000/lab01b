#include <stdio.h>

int main() {
    int numeroMaximo;
    printf("Digite um número ímpar máximo: ");
    scanf("%d", &numeroMaximo);

    if (numeroMaximo % 2 == 0) {
        printf("O número máximo deve ser ímpar.\n");
        return 1;
    }

    for (int i = 1; i <= numeroMaximo; i += 2) {
        for (int j = 1; j <= (i - 1) / 2; j++) {
            printf("   ");
        }

        for (int j = i; j <= numeroMaximo; j++) {
            printf("%2d ", j);
        }

        printf("\n");
    }

    return 0;
}
