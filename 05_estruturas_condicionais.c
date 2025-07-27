#include <stdio.h>

int main()
{
    printf("\n--- Notas dos alunos da classe ---\n");
    int nota;

    printf("Digite a nota do aluno (0 a 100): ");
    scanf("%d", &nota);

    if (nota >= 60)
    {
        printf("Aluno aprovado por média, parabéns!\n");
    }
    else if (nota >= 50 && nota < 60)
    {
        printf("Aluno em recuperação. Estude mais!\n");
    }
    else
    {
        printf("Aluno reprovado. Não desanime, continue seus estudos!\n");
    }

    printf("\n--- Verificando Par ou Impar ---\n");
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    { 
        printf("%d e um numero PAR.\n", numero);
    }
    else
    {
        printf("%d e um numero IMPAR.\n", numero);
    }

    return 0;
}