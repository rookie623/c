/*
    8. Hacer un programa que solicite 20 números y luego mostrar por pantalla el
    menor de ellos y la posición en la que fue encontrado.
*/
#include <stdio.h>

int main()
{
    int num;
    int pos;
    int i;
    int min;

    min = num++; //revisar validez de esto

    for(i = 1; i < 21; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%i", &num);

        if(num < min)
        {
            min = num;
            pos = i;
        }
    }

    printf("El numero minimo es %i y se registro en la posicion %i", min, pos);

    return 0;
}
