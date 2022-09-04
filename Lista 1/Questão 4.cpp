#include <stdio.h>

int main()
{
    int n1, n2, quo, resto;

    printf("Por favor digite dividendo: ");
    scanf("%d", &n1);
    printf("Por favor digite divisor: ");
    scanf("%d", &n2);

    quo = n1 / n2;
    resto = n1 % n2;

    printf("Resultado da divisao de %d por %d: %d\nResto: %d\n", n1,n2,quo,resto);

}