/*
    6. Hacer un programa que solicite UN número y luego calcule y emita un cartel
    aclaratorio si el mismo es primo o no es primo.
    Nota: un numero es primo cuando es divisible únicamente por 1 y por sí mismo.
*/
#include <stdio.h>

int main()
{
    int num;
    int i;
    int cont = 0;
    int resto;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    for(i = 1; i <= num; i++)
    {
        resto = num % i;
        if( resto == 0)
        {
            cont++;
        }
    }

    if(cont == 2)
    {
        printf("El numero es primo");
    }
    else
    {
        printf("El numero no es primo");
    }

    return 0;
}
