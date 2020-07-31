/*
    10. Hacer un programa que solicite 20 números y luego emitir por pantalla el
    máximo de los números pares y el mínimo de los números impares.
*/
#include <stdio.h>

int main()
{
    int num, resto;
    int i,j;
    int max, min;

    for(i = 0; i < 20; i++)
    {
        printf("Ingrese numero: ");
        scanf("%i", &num);

        resto = num % 2;

//TODO simplificar Tip uso de banderas booleanas
        if(i == 0)
        {
            if(resto == 0)
            {
                max = num;
            }
            else
            {
                min = num;
                j++;
            }
        }
        else
        {
            if(resto == 0)
            {
                if(num > max)
                {
                    max = num;
                }
            }
            else
            {
                if(j == 0)
                {
                    min = num;
                    j++;
                }
                else
                {
                    if(num < min)
                    {
                        min = num;
                    }
                }
            }
        }
    }

    printf("maximo de los pares: %i\nminimo de los impares: %i", max, min);

    return 0;
}
