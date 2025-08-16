#include <stdio.h>

int main() {
    int dia;

    printf("Digite um numero de 1 a 7 para o dia da semana: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break; // O 'break' é essencial para sair do switch!
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default: // Opcional
            printf("Numero invalido. Por favor, digite um numero de 1 a 7.\n");
    }

    return 0;
}