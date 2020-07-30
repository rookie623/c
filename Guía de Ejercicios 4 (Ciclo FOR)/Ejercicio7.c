/*
    7. Hacer un programa que solicite 10 números y luego mostrar por pantalla el
    máximo de ellos y la posición en la que fue ingresado.
*/
#include <stdio.h>

int main()
{
    int num;
    int pos;
    int i;
    int max;

    for(i = 1; i < 11; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%i", &num);

        if(num > max)
        {
            max = num;
            pos = i;
        }
    }

    printf("El numero maximo es %i y se registro en la posicion %i", max, pos);

    return 0;
}
