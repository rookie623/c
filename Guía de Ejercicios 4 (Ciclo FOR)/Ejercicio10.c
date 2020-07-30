/*
    10. Hacer un programa que solicite 20 números y luego emitir por pantalla el
    máximo de los números pares y el mínimo de los números impares.
*/
#include <stdio.h>

int main()
{
    int num, resto;
    int i;
    int max, min;


    for(i = 0; i < 5; i++)
    {
        printf("Ingrese numero: ");
        scanf("%i", &num);

        resto = num % 2;

        if(resto == 0)
        {
            if (num > max)
            {
                max = num;
            }
        }
        else
        {
            if(num < min)
            {
                min = num;
            }
        }
    }

    printf("maximo de los pares: %i minimo de los impares: %i", max, min);

    return 0;
}
