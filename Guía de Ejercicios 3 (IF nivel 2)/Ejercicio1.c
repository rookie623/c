/*
    1. Hacer un programa que solicite el ingreso de un n�mero y que luego emita un
    cartel por pantalla aclarando si el mismo es m�ltiplo de 5.
*/
#include <stdio.h>

int main()
{
    int num;
    int resto;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    resto = num % 5;

    if(resto == 0)
    {
        printf("El numero es multiplo de 5");
    }

    return 0;
}
