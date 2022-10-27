#include <stdio.h>

int main()
{
    char nome[40], sexo, mat[12];
    float horasTrabalhadas, valorHora, salario;

    printf("Digite o Nome: ");
    scanf("%s", &nome);

    /*printf("Digite o sexo: ");
    scanf("%c", &sexo);*/

    printf("Digite a Matricula: ");
    scanf("%s", &mat);

    printf("Trabalhou por quantas horas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Quanto ganha por hora (em R$): ");
    scanf("%f", &valorHora);

    salario = valorHora * horasTrabalhadas;

    printf("----------------------------------");
    printf("\nNome: %s", nome);
   // printf("\nSexo: %c", sexo);
    printf("\nMatricula: %s", mat);
    printf("\nTrabalhou por %.2f horas", horasTrabalhadas);
    printf("\nGanha %.2fR$ por hora", valorHora);
    printf("\nSalario: %.2fR$", salario);
}