/*
    11. Hacer un programa para ingresar cuatro números y luego mostrar por pantalla
    cuántos son menores a 100.
*/
#include <stdio.h>

int main()
{
    //variables
    int num1, num2, num3, num4;

    //interfaz usuario
    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);

    printf("Ingrese el cuarto numero: ");
    scanf("%i", &num4);

    //Condicional
    if(num1 < 100)
    {
        if(num2 < 100)
        {
            if(num3 < 100)
            {
                if(num4 < 100)
                {
                    printf("Todos los numeros son menores a 100");
                }
                else
                {
                    printf("num1 num2 num3");
                }
            }
            else
            {
                if(num4 < 100)
                {
                    printf("num1 num2 num4");
                }
                else
                {
                    printf("num1 num2");
                }
            }
        }
        else
        {
            if(num3 < 100)
            {
                if(num4 < 100)
                {
                    printf("num1 num3 num4");
                }
                else
                {
                    printf("num1 num3");
                }
            }
            else
            {
                if(num4 < 100)
                {
                    printf("num1 num4");
                }
                else
                {
                    printf("num1");
                }
            }
        }
    }
    else
    {
        if(num2 < 100)
        {
            if(num3 < 100)
            {
                if(num4 < 100)
                {
                    printf("num2 num3 num4");
                }
                else
                {
                    printf("num2 num3");
                }
            }
            else
            {
                if(num4 < 100)
                {
                    printf("num2 num4");
                }
                else
                {
                    printf("num2");
                }
            }
        }
        else
        {
            if(num3 < 100)
            {
                if(num4 < 100)
                {
                    printf("num3 num4");
                }
                else
                {
                    printf("num3");
                }
            }
            else
            {
                if(num4 < 100)
                {
                    printf("num4");
                }
                else
                {
                    printf("Ningun numero es menor a 100");
                }
            }
        }
    }

    return 0;
}
