/*
    1. Hacer un programa para ingresar un número y luego se emita por pantalla un
    cartel aclaratorio si “Es mayor a 10” o “No es mayor a 10”.
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Ingrese el numero a evaluar: ");
    scanf("%i",&num);

    if(num > 10)
    {
        printf("Es mayor a 10\n");
    }
    else
    {
        printf("No es mayor a 10\n");
    }

    return 0;
}
