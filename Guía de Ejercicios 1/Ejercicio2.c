/*
    2. Hacer un programa para solicitar por teclado un número y luego devolver su
    valor elevado al cubo.
*/

#include <stdio.h>

int main()
{
    //Declaracion de variables
    int num;
    int result;
    //prompt para el usuario
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    //Operacion de potencia al cubo
    result = num * num * num;
    //resultado por pantalla
    printf("El resultado de la potencia es: %d", result);
    return 0;
}
