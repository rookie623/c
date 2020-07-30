/*
    5. Hacer un programa que muestre los números del 1 al 100 de 5 en 5. Ejemplo:
    0, 5, 10, 15, 20…. 100.
*/
#include <stdio.h>

int main()
{
    int i;
    for(i = 0; i < 105; i += 5)
    {
        printf("%i\n", i);
    }
    return 0;
}
