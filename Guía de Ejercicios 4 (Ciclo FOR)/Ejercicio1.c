/*
    1. Hacer un programa que solicite el ingreso de 10 números y que muestre el
    mayor de ellos por pantalla. Solo se debe emitir UN valor por pantalla.
*/
#include <stdio.h>

int main()
{
    int num;
    int max;
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%i", &num);
        if(num > max)
        {
            max = num;
        }
    }
    printf("El numero mayor es: %i", max);

    return 0;
}
