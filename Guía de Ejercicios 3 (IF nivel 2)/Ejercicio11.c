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
                printf("%i %i %i", num1, num2, num3);
            }
            else
            {
                printf("%i %i %i", num1, num3, num2);
            }
        }
        else
        {
            if(num3 < num2)
            {
                printf("%i %i %i", num3, num1, num2);
            }
            else
            {
                printf("%i %i %i", num2, num3, num1);
            }
        }
    }
    else
    {
        if(num2 < num3)
        {
            if(num3 < num1)
            {
                printf("%i %i %i", num2, num3, num1);
            }
            else
            {
                printf("%i %i %i", num1, num3, num2);
            }
        }
        else
        {
            if(num2 < num1)
            {
                printf("%i %i %i", num3, num1, num2);
            }
            else
            {
                printf("%i %i %i", num3, num2, num1);
            }
        }

    }

    return 0;
}
