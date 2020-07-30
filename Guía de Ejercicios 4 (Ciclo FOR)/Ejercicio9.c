/*
    9. Hacer un programa que solicite 20 edades y luego calcule el promedio de edad
    de aquellas personas mayores a 18 agnos.
*/
#include <stdio.h>

int main()
{
    int edad;
    int suma;
    float prom;
    int i, j;

    for(i = 0; i < 21; i++)
    {
        printf("\nIngrese la edad: ");
        scanf("%i", &edad);

        if(edad >= 18)
        {
            j++;
            suma = suma + edad;
        }
    }

    prom = (float) suma / j;

    printf("El promedio de las personas mayores a 18: %.2f", prom);

    return 0;
}
