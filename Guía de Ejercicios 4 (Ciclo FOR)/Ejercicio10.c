/*
    10. Hacer un programa que solicite 20 n�meros y luego emitir por pantalla el
    m�ximo de los n�meros pares y el m�nimo de los n�meros impares.
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
