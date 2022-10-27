#include <stdio.h>

int main()
{
    float metros, metrosAvulsos;
    int rolos;

    printf("Quantos metros de fio voce precisa?\n");
    scanf("%f", metros);

    rolos = metros / 50;
    metrosAvulsos = metros - rolos * 50;

    printf("Voce precisa de %d rolos e %.2f metros avulsos", rolos, metrosAvulsos);
}