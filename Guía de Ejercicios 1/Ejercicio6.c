/*
    6. Hacer un programa para ingresar por teclado las tres notas de exámenes de un
    alumno y luego calcule y emita por pantalla el promedio final.
*/
#include <stdio.h>

int main()
{
    int nota1, nota2, nota3;
    int promedio;

    printf("Ingrese la primer nota del alumno: ");
    scanf("%i", &nota1);
    printf("Ingrese la segunda nota del alumno: ");
    scanf("%i", &nota2);
    printf("Ingrese la tercera nota del alumno: ");
    scanf("%i", &nota3);

    promedio = (nota1 + nota2 + nota3) / 3;

    printf("Este es el promedio del alumno: %i", promedio);

    return 0;
}
