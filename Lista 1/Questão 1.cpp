#include <stdio.h>

int main()
{
    int horas, minutos, segundos;

    printf("Quantidade de Horas a ser calculada: ");
    scanf("%d", &horas);
    
    minutos = horas * 60;
    segundos = minutos * 60;

    if (horas == 1)
    {
    printf("%d Hora equivale a %d minutos ou %d segundos", horas, minutos, segundos);
    }
    else
   printf("%d Horas equivalem a %d minutos ou %d segundos", horas, minutos, segundos);
}