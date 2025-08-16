#include <stdio.h>

int main() {
    printf("Contando de 1 a 20 com o loop for:\n");
    for (int i = 1; i <= 20; i++) {
        printf("Contador: %d\n", i);
    }

    // Exemplo de contagem regressiva
    printf("\nContagem regressiva de 15 a 0:\n");
    for (int j = 15; j >= 0; j--) {
        printf("%d\n", j);
    }

    return 0;
}