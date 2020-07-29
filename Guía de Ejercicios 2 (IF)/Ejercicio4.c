/*
    4. Hacer un programa para ingresar un número y luego se emita un cartel por
    pantalla “Positivo” si el número es mayor a cero, “Negativo” si el número es
    menor a cero o “Cero” si el número es igual a cero.
    Nota: requiere más de in IF! Repasá cómo se escribirían:
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
