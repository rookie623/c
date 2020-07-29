/*
    3. Hacer un programa para ingresar dos números. Si el segundo es distinto de
    cero, calcular la división del primero por el segundo y mostrar el resultado por
    pantalla; caso contrario, emitir un cartel aclarando que no se puede dividir por
    cero.
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    int div;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    if(num2 != 0)
    {
        div = num1 / num2;
        printf("Este es el resultado de la division: %i", div);
    }
    else
    {
        printf("No se puede dividir por cero");
    }


    return 0;
}
