/*
    2. Hacer un programa para ingresar dos números distintos y luego se muestre por
    pantalla el menor de ellos.
*/
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Ingrese un numero: ");
    scanf("%i", &num1);
    printf("Ingrese un numero distinto al anterior: ");
    scanf("%i", &num2);

    if(num1 < num2)
    {
        printf("El primer numero es el menor: %i\n", num1);
    }
    else
    {
        printf("El primer numero es el menor: %i\n", num2);
    }

    return 0;
}
