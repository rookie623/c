/*
    9. Hacer un programa para ingresar cinco números distintos y luego mostrar por
    pantalla el mayor y el mayor de ellos.
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;
    int menor, mayor;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);

    printf("Ingrese el cuarto numero: ");
    scanf("%i", &num4);

    printf("Ingrese el quinto numero: ");
    scanf("%i", &num5);

    //Evaluacion del numero mayor
    if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
    {
        mayor = num1;
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
    {
        mayor = num2;
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
    {
        mayor = num3;
    }
    else if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
    {
        mayor = num4;
    }
    else if (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4)
    {
        mayor = num5;
    }
    //Evaluacion del numero menor
    if(num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
    {
        menor = num1;
    }
    else if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
    {
        menor = num2;
    }
    else if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
    {
        menor = num3;
    }
    else if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
    {
        menor = num4;
    }
    else if (num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
    {
        menor = num5;
    }

    printf("Este es el mayor %i y este el menor %i\n", mayor, menor);

    return 0;
}
