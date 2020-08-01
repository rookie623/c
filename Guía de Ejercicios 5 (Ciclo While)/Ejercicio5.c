/*
    5. Hacer un programa que muestre los números del 1 al 100 de 5 en 5. Ejemplo:
    0, 5, 10, 15, 20…. 100. Usando While.
*/
#include <stdio.h>

int main()
{
    int i = 0;

    while(i <= 100)
    {
        printf("%i\n", i);
        i += 5;
    }

    return 0;
}
