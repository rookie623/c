/*
    11. Hacer un programa para ingresar tres números y luego mostrarlos ordenados
    de menor a mayor.
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);

    //condicional
    if(num1 < num2)
    {
        if(num1 < num3)
        {
            if(num2 < num3)
            {
                printf("OPCION 1 %i %i %i", num1, num2, num3);
            }
            else
            {
                printf("OPCION 2 %i %i %i", num1, num3, num2);
            }
        }
        else
        {
                printf("OPCION 3 %i %i %i", num3, num1, num2);
        }
    }
    else
    {
        if(num2 < num3)
        {
            if(num1 < num3)
            {
                printf("OPCION 4 %i %i %i", num2, num1, num3);
            }
            else
            {
                printf("OPCION 5 %i %i %i", num2, num3, num1);
            }
        }
        else
        {
                printf("OPCION 6 %i %i %i", num3, num2, num1);
        }
    }


    return 0;
}
