/*
    11. Hacer un programa para ingresar 10 números y luego calcule y emita el mayor
    de los primos de la lista. En caso de no haber ningún número primo, deberá
    aclararlo con un cartel.
*/
#include <stdio.h>

int main()
{
    int num;
    int i, j;
    int resto;
    int max;
    int cont;
    int cantPrimo;

//Ciclo principal
    for(j = 0; j < 10; j++)
    {
        printf("Ingrese un numero: ");
        scanf("%i", &num);

        cont = 0;
        //Ciclo evaluacion de primalidad
        for(i = 1; i <= num; i++)
        {
            resto = num % i;
            if( resto == 0)
            {
                cont++;
            }
        }
        if(cont == 2)
        {
            if(j == 1)
            {
                max = num;
                cantPrimo++;
            }
            else
            {
                if(num > max)
                {
                    max = num;
                    cantPrimo++;
                }
            }
        }
    }

    if(cantPrimo > 0)
    {
        printf("El maximo numero primo es: %i", max);
    }
    else
    {
        printf("No hay numeros primos");
    }


    return 0;
}
