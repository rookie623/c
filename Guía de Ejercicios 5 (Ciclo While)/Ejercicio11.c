/*
    11. Hacer un programa para ingresar una lista de n�meros que corta cuando se
    ingresa un cero y luego mostrar: la cantidad de n�meros primos, la cantidad de
    n�meros pares, la cantidad de positivos y la cantidad de negativos.
*/
#include <stdio.h>

int main()
{
    int num = 1;
    int i;
    //contadores posotivos y negativos
    int cantPos = 0;
    int cantNeg = 0;
    //contadores pares e impares
    int cantPar = 0;
    int cantImp = 0;
    //variables depedendiente primos
    int resto;
    int restoPri;
    int contResto = 0;
    int cantPrimo = 0;

    while (num != 0)
    {
        printf("Ingrese un numero: ");
        scanf("%i", &num);    

        if(num != 0)
        {
        //Contadores pares e impares
            resto = num % 2;
            if(resto == 0)
            {
                cantPar++;
            }
            else
            {
                cantImp++;
            }
            
//TODO: revisar contador de primos
        //contador de primos
            i = 1;
            while (num >= i)
            {
                restoPri = num % i;
                i++; //Actualizacion de contador de iteraciones
        
                if(restoPri == 0)
                {
                    contResto++;
                }
            }

            if(contResto == 2)
            {
                cantPrimo++;
            }

            //contadores de polaridad
            if(num > 0)
            {   
                cantPos++;
            }
            else
            {
                cantNeg++;
            }
        }
    }

    
    /*  11. Hacer un programa para ingresar una lista de n�meros que corta cuando se
    ingresa un cero y luego mostrar: la cantidad de n�meros primos, la cantidad de
    n�meros pares, la cantidad de positivos y la cantidad de negativos.*/

    printf("Cantidad de N° Primos %i\n", cantPrimo);
    printf("Cantidad de N° Pares %i\n", cantPar);
    printf("Cantidad de N° Impares %i\n", cantImp);
    printf("Cantidad de N° Positivos %i\n", cantPos);
    printf("Cantidad de N° Negativos %i\n", cantNeg);



    return 0;
}