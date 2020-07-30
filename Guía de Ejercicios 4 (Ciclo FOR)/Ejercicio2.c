/*
    2. Hacer un programa que solicite 20 números y calcule y emita por pantalla
    cuántos son positivos (mayores a cero). Se debe mostrar un solo valor: el
    conteo final.
*/
#include <stdio.h>

int main()
{
    int num;
    int i, j = 0;

    for(i = 0; i < 20; i++)
    {
        printf("Ingrese el numero: ");
        scanf("%i", &num);

        if(num > 0)
        {
            j++;
        }
    }
    printf("\nSe contabilizaron %i numeros positivos\n", j);

    return 0;
}
