#include <stdio.h>

int main()
{
    float n1, n2, n3;

    printf("Por favor digite 1º numero: ");
    scanf("%f", &n1);
    printf("Por favor digite 2º numero: ");
    scanf("%f", &n2);
    printf("Por favor digite 3º numero: ");
    scanf("%f", &n3);

    float media = (n1 + n2 + n3) / 3;

    printf("A media dos numeros %.2f, %.2f, e %.2f equivale a: %.2f", n1, n2, n3, media);

}