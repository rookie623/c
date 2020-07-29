/*
    10. Hacer un programa para ingresar cuatro números y luego mostrar por pantalla
    cuáles son mayores a 100.
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);

    printf("Ingrese el cuarto numero: ");
    scanf("%i", &num4);

    if(num1 > 100)
    {
        if(num2 > 100)
        {
            if(num3 > 100)
            {
                if(num4 > 100)
                {
                    printf("Todos los numeros son mayores a 100\n");
                }
                else
                {
                    printf("num1 num2 num3\n");
                }
            }
            else
            {
                if(num4 > 100)
                {
                    printf("num1 num2 num4\n");
                }
                else
                {
                    printf("num1 num2\n");
                }
            }
        }
        else
        {
            if(num3 > 100)
            {
                if(num4 > 100)
                {
                    printf("num1 num3 num4\n");
                }
                else
                {
                    printf("num1 num3\n");
                }
            }
            else
            {
                if(num4)
                {
                    printf("num1 num4\n");
                }
                else
                {
                    printf("num1\n");
                }
            }
        }
    }
    else
    {
        if(num2 > 100)
        {
            if(num3 > 100)
            {
                if(num4 > 100)
                {
                    printf("num2 num3 num4\n");
                }
                else
                {
                    printf("num2 num3\n");
                }
            }
            else
            {
                if(num4 > 100)
                {
                    printf("num2 num4\n");
                }
                else
                {
                    printf("num2\n");
                }
            }
        }
        else
        {
            if(num3 > 100)
            {
                if(num4 > 100)
                {
                    printf("num3 num4\n");
                }
                else
                {
                    printf("num3\n");
                }
            }
            else
            {
                if(num4 > 100)
                {
                    printf("num4\n");
                }
                else
                {
                    printf("ninguno es mayor a 100\n");
                }
            }
        }
    }


    return 0;
}

