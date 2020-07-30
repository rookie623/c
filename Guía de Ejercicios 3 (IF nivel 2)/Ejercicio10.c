/*
    10. Hacer un programa que solicite cuatro números y emitir un cartel aclaratorio si
    son todos iguales entre sí, caso contrario, no emitir nada.
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

    if(num1 == num2)
    {
        if(num2 == num3)
        {
            if(num3 == num4)
            {
                printf("Todos los numeros son iguales");
            }
        }
    }


    return 0;
}
