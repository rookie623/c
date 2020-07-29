/*
    12. Hacer un programa para ingresar tres números y emitir un cartel aclaratorio si
    la suma de los dos primeros es mayor al producto del segundo con el tercero.
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int suma;
    int producto;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);


    suma = num1 + num2;
    producto = num2 * num3;


    if(suma > producto)
    {
        printf("La suma de los dos primeros numeros es mayor al produto del segundo y el tercero");
    }


    return 0;
}
