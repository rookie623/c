/*
    6. Hacer un programa que solicite UN n�mero y luego calcule y emita un cartel
    aclaratorio si el mismo es primo o no es primo.
    Nota: un numero es primo cuando es divisible �nicamente por 1 y por s�
    mismo.
*/
#include <stdio.h>

int main()
{
    int num;
    int i;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    for(i = num; i > 0; i--)
    {
        mod = num % i;
        if(mod = 0)
        {
            printf("Es primo");
        }
    }

    return 0;
}
