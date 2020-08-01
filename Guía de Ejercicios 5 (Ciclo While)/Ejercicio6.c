/*
    6. Hacer un programa que solicite UN número y luego calcule y emita un cartel
    aclaratorio si el mismo es primo o no es primo.
    Nota: usando While. Ya lo hicimos con FOR, ahora con While.
*/
#include <stdio.h>

int main()
{
    int num;
    int resto, cont;
    int i = 1;

    cont = 0;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    while(num >= i)
    {
        resto = num % i;
        i++;

        if(resto == 0)
        {
            cont++;
        }
    }

    if(cont == 2)
    {
        printf("Es primo");
    }
    else
    {
        printf("No es primo");
    }

    return 0;
}
