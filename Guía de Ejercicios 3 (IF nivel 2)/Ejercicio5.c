/*
    5. Hacer un programa que solicite el ingreso de las notas del primer parcial y del
    segundo parcial de una alumna de programaci�n. El programa deber� analizar
    las notas y emitir la situaci�n de la alumna seg�n la siguiente escala:
        a. Si tiene 8 o m�s en ambos parciales, emitir �aprobaci�n directa�.
        b. Si tiene entre 4 y 7 en ambos parciales, emitir �rinde examen final�.
        c. Si tiene menos de 4 en alguno de los dos parciales, emitir �debe
    recuperar�.
    El programa debe emitir solo un cartel, el que corresponda.
*/
#include <stdio.h>

int main()
{
    int nota1, nota2;

    printf("Ingrese la primer nota: ");
    scanf("%i", &nota1);

    printf("Ingrese la segunda nota: ");
    scanf("%i", &nota2);

    if(nota1 > 7 && nota2 > 7)
    {
        printf("Aprobacion directa");
    }
    else if(nota1 > 3 && nota2 < 8)
    {
        printf("Ride examen final");
    }
    else if(nota1 < 4 || nota2 < 4)
    {
        printf("Debe recuperar");
    }


    return 0;
}
