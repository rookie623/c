/*
    10. Hacer un programa que permita ingresar por teclado dos números y que luego
    muestre por pantalla la suma, la resta, la multiplicación y la división de dichos
    números. Se deben mostrar cuatro resultados en pantalla. Los números deben
    ser solicitados una única vez.
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    int suma, resta, producto;
    float division;

    printf("Ingrese un numero: ");
    scanf("%i", &num1);
    printf("Ingrese un segundo numero: ");
    scanf("%i", &num2);

    //Operaciones
    suma = num1 + num2;
    resta = num1 - num2;
    producto = num1 * num2;
    division = (float) num1 / num2;

    printf("Esta es la suma de los dos numeros: %i\n", suma);
    printf("Esta es la resta de los dos numeros: %i\n", resta);
    printf("Esta es la multiplicacion de los dos numeros: %i\n", producto);
    printf("Esta es la division de los dos numeros: %.2f\n", division);


    return 0;
}
