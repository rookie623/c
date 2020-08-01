/*
    8. Hacer un programa que solicite una lista de números que corta cuando se
    ingresa un cero y luego mostrar por pantalla el menor y el segundo menor.
*/
#include <stdio.h>
//TODO: revisar logica, programa cumple, falta simplificar
int main()
{
    int num;
    int min, min2;
    int i = 0;

    while(num != 0)
    {
        printf("Ingrese un numero: ");
        scanf("%i", &num);

        if(num != 0)
        {
            if(i == 0)
            {
                min = num;
                min2 = min;
            }
            else
            {
                if(num < min)
                {
                    {
                        min2 = min;
                        min = num;
                    }
                }
            }
        }
        i++;
    }

    printf("El menor de lo numero es %i y el segundo menor es %i", min, min2);


    return 0;
}
