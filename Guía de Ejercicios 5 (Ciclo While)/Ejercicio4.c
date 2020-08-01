/*
    4. Hacer un programa que solicite dos números y luego muestre los números
    entre el menor y el mayor de ellos. Acordate, usando While.
*/
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Ingrese un numero: ");
    scanf("%i", &num1);

    printf("Ingrese otro numero: ");
    scanf("%i", &num2);

//TODO: arreglar que imprime el primer numero de la serie
    while(num1 != num2)
    {
        if(num1 > num2)
        {
            printf("%i\n", num2);
            ++num2;
        }
        else
        {
            printf("%i\n", num1);
            ++num1;
        }
    }

    return 0;
}
