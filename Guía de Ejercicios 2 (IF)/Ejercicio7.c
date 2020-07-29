/*
    7. Hacer un programa para ingresar cuatro números distintos y luego mostrar por
    pantalla el mayor de ellos.
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);
    printf("Ingrese el cuarto numero: ");
    scanf("%i", &num4);

    if(num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("El primer numero es el mayor: %i", num1);
    }
    else if(num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("El segundo numero es el mayor: %i", num2);
    }
    else if(num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf("El tercer numero es el mayor: %i", num3);
    }
    else if(num4 > num1 && num4 > num2 && num4 > num3)
    {
        printf("El cuarto numero es el mayor: %i", num4);
    }


    return 0;
}
