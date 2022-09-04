#include <stdio.h>
#define PI 3.14

int main()
{
    float raio, area;

    printf("Por favor digite o tamanho do raio em cm: ");
    scanf("%f", &raio);

    area = PI * (raio * raio);

    printf("A area de um circulo cujo raio mede %.2fcm equivale a %.2fcm², ou %.2fm²", raio, area, area/100);

}