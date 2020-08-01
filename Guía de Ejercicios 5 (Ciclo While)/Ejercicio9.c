/*
    9. Realizar nuevamente el ejercicio 8 pero ahora debe devolver adem�s la
    posici�n en la que fue encontrado cada uno de los m�nimos.

Recordatorio:
    8. Hacer un programa que solicite una lista de n�meros que corta cuando se
    ingresa un cero y luego mostrar por pantalla el menor y el segundo menor.
*/
#include <stdio.h>

int main()
{
    int num;
    int min, min2;
    int pos, pos2;
    int i = 0;

    while (num != 0)
    {
        printf("Ingrese un numero: ");
        scanf("%i", &num);

        if (num != 0)
        {
            if(i == 0)
            {
                min = num;
                pos = i + 1;
                min2 = min;
                pos2 = pos;
            }
            else
            {
                if(num < min)
                {
                    min2 = min;
                    pos2 = pos;
                    min = num;
                    pos = i + 1;
                }
            }
        }
        i++; //Actualizacion del contador de iteracion
    }

printf("Primer menor: %i posicion: %i\nsegundo menor: %i posicion: %i\n", min, pos, min2, pos2);



    return 0;
}