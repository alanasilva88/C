#include <stdio.h>

int main()
{
    int contador = 1;

    printf("Contando de 1 a 10 com o loop while:\n");

    while (contador <= 10)
    {
        printf("Contador: %d\n", contador);
        contador++;
    }

    printf("Contagem finalizada!\n");

    return 0;
}
