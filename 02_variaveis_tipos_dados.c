#include <stdio.h>

int main () 
{
    // --- Tipos de Dados Inteiros ---
    // int: para números inteiros (positivos, negativos e zero)
    int idade = 30;
    int quantidade = 1;
    printf("Minha idade: %d \n", idade);
    printf("Quantidade de pessoas: %d \n", quantidade);

    // short: um inteiro menor, ocupa menos memória
    short pequenos_numeros = 100;
    printf("Número pequeno: %hd \n", pequenos_numeros);

    // long: um inteiro maior, pode armazenar números muito grandes
    long populacao_cidade = 1500000;
    printf("População da cidade: %ld \n", populacao_cidade);

    // --- Tipos de Dados de Ponto Flutuante (Decimais) ---
    // float: para números com casas decimais (precisão simples)
    float preco = 19.99f;                       // f indica que é float
    printf("Preco do produto: %.2f \n", preco); // .2f formata para 2 casas decimais

    // double: para números com casas decimais (precisão dupla, mais preciso)
    double pi = 3.1415926535;
    printf("Valor de PI: %.10lf \n", pi); // .10lf formata para 10 casas decimais

    // --- Tipo de Dado Caractere ---
    // char: para armazenar um único caractere
    char letra = 'A'; // Caracteres são colocados entre aspas simples
    printf("Uma letra: %c \n", letra);

    // --- Booleans (verdadeiro/falso) ---
    // C não tem um tipo booleano nativo antes do C99.
    // Usamos int, onde 0 é falso e qualquer valor diferente de 0 (geralmente 1) é verdadeiro.
    int esta_ligado = 1; // Verdadeiro
    int tem_erro = 0;    // Falso
    printf("Esta ligado (1=sim, 0=nao): %d\n", esta_ligado);
    printf("Tem erro (1=sim, 0=nao): %d\n", tem_erro);

    // --- Operações com Variáveis ---
    int num1 = 10;
    int num2 = 5;
    int soma = num1 + num2;
    int subtracao = num1 - num2;
    float divisao = (float)num1 / num2; // Conversão de tipo (casting) para float para ter decimal

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Divisao: %.2f\n", divisao);

    return 0; // sucesso
}