/*
    7. Hacer un programa que solicite una lista de números que corta cuando se
    ingresa un cero y luego mostrar por pantalla el máximo de ellos y la posición
    en la que fue ingresado.
*/
#include <stdio.h>

int main()
{
    int num = 1;
    int max;
    int i = 0;
    int pos;

    while(num != 0)
    {
        printf("Ingrese un numero: ");
        scanf("%i", &num);
        i++;

        if(i == 0)
        {
            max = num;
            pos = i;
        }
        else
        {
            if(num > max)
            {
                max = num;
                pos = i;
            }
        }
    }

    printf("El numero maximo registrado fue %i y fue encontrado en la posicion %i", max, pos);

    return 0;
}
