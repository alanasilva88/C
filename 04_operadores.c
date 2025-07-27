#include <stdio.h>

int main()
{
    int a = 10, b = 5;
    int resultado;

    printf("--- Operadores Aritmeticos ---\n");
    resultado = a + b;
    printf("%d + %d = %d\n", a, b, resultado);
    resultado = a - b;
    printf("%d - %d = %d\n", a, b, resultado);
    resultado = a * b;
    printf("%d * %d = %d\n", a, b, resultado);
    resultado = a / b;
    printf("%d / %d = %d (divisao de inteiros)\n", a, b, resultado);
    float div_float = (float)a / b;
    printf("%d / %d = %.2f (divisao de floats)\n", a, b, div_float);
    resultado = a % b;
    printf("%d %% %d = %d (resto da divisao)\n", a, b, resultado);

    printf("\n--- Operadores Relacionais (Resultado: 1=Verdadeiro, 0=Falso) ---\n");
    printf("%d == %d : %d\n", a, b, a == b); // 10 == 5 -> 0 (Falso)
    printf("%d != %d : %d\n", a, b, a != b); // 10 != 5 -> 1 (Verdadeiro)
    printf("%d > %d : %d\n", a, b, a > b);   // 10 > 5 -> 1 (Verdadeiro)
    printf("%d < %d : %d\n", a, b, a < b);   // 10 < 5 -> 0 (Falso)
    printf("%d >= %d : %d\n", a, b, a >= b); // 10 >= 5 -> 1 (Verdadeiro)
    printf("%d <= %d : %d\n", a, b, a <= b); // 10 <= 5 -> 0 (Falso)

    printf("\n--- Operadores Logicos (Resultado: 1=Verdadeiro, 0=Falso) ---\n");
    int c = 5;
    printf("(a > b) && (a > c) : %d\n", (a > b) && (a > c)); // (10 > 5) && (10 > 5) -> (Verdadeiro) && (Verdadeiro) -> 1
    printf("(a < b) || (a > c) : %d\n", (a < b) || (a > c)); // (10 < 5) || (10 > 5) -> (Falso) || (Verdadeiro) -> 1
    printf("!(a == b) : %d\n", !(a == b));                   // !(10 == 5) -> !(Falso) -> 1

    return 0;
}