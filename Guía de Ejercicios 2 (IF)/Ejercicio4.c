/*
    4. Hacer un programa para ingresar un n�mero y luego se emita un cartel por
    pantalla �Positivo� si el n�mero es mayor a cero, �Negativo� si el n�mero es
    menor a cero o �Cero� si el n�mero es igual a cero.
    Nota: requiere m�s de in IF! Repas� c�mo se escribir�an:
*/
#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese el numero a evaluar: ");
    scanf("%i", &num);

    if (num == 0)
    {
        printf("El numero es cero");
    }
    else if(num > 0)
    {
        printf("El numero es positivo");
    }
    else
    {
        printf("El numero es negativo");
    }

    return 0;
}
