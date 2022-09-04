#include <stdio.h>
#define PESO1 3.5
#define PESO2 7.5

int main()
{
    float nota1, nota2, media;

    printf("Insira a nota A: ");
   scanf("%f", &nota1);
    printf("Insira a nota B: ");
   scanf("%f", &nota2);

    media = ((nota1 + PESO1) + (nota2 + PESO2)) / 2;

    printf("Media do aluno: %.2f", media);
}