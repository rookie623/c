/*
    2. Hacer un programa que solicite el ingreso de dos números y luego calcular:
        a. La resta si el primero es mayor que el segundo.
        b. La suma si son iguales.
        c. El producto si el primero es menor.
    Se deberá emitir un cartel por pantalla con el resultado correspondiente.
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    int resta, suma, product;

    printf("Ingrese el numero: ");
    scanf("%i", &num1);

    printf("Ingrese el numero: ");
    scanf("%i", &num2);

    if(num1 > num2)
    {
        resta = num1 - num2;
        printf("El resultado de la resta es: %i", resta);
    }
    else if(num1 == num2)
    {
        suma = num1 + num2;
        printf("El resultado de la resta es: %i", suma);

    }
    else
    {
        product = num1 * num2;
        printf("El resultado de la resta es: %i", product);

    }

    return 0;
}
