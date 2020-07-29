/*
    5. Hacer un programa para ingresar un número y mostrar por pantalla un cartel
    aclaratorio si el mismo es PAR o IMPAR.
    Nota: leé sobre el operador “Resto”. En el próximo video lo explicaremos!
*/
#include <stdio.h>

int main()
{
    int num;
    int resto;

    printf("Ingrese el numero a evaluar: ");
    scanf("%i", &num);

    resto = num % 2;

    if(resto == 0)
    {
        printf("El numero es par");
    }
    else
    {
        printf("El numero es impar");
    }

    return 0;
}
