/*
    3. Hacer un programa para ingresar dos n�meros y que luego emita por pantalla
    el mayor de ellos o un cartel aclaratorio �Son iguales� en el caso de que as� sea.
    Nota: los n�meros pueden ser iguales.
*/
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Ingrese un numero: ");
    scanf("%i", &num1);
    printf("Ingrese otro numero: ");
    scanf("%i", &num2);

    if(num1 == num2)
    {
        printf("Los numeros son iguales\n");
    }
    else if(num1 > num2)
    {
        printf("El primer numero es el mayor\n");
    }
    else
    {
        printf("El segundo numero es el mayor\n");
    }

    return 0;
}
