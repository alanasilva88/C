#include <stdio.h>

int main()
{
    // Declarando variáveis para armazenar a idade e o peso
    int idade;
    float peso;
    char nome[50]; // Array de caracteres para nome (string)

    // --- Lendo um número inteiro ---
    printf("Digite sua idade: ");
    scanf("%d", &idade); // %d para inteiro, &idade para o endereco da variavel

    // --- Lendo um número decimal ---
    printf("Digite seu peso (ex: 65.5): ");
    scanf("%f", &peso);

    // --- Lendo uma string ---
    // Para nomes com espacos, usa-se fgets()
    printf("Digite seu primeiro nome: ");
    scanf(" %s", nome); // %s para string. Nao precisa de '&' para array de caracteres aqui

    printf("\n--- Informacoes Coletadas ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Peso: %.2f kg\n", peso);

    return 0;
}