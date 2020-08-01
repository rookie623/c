/*
    10. Hacer un programa que solicite una lista de n�meros que corta cuando se
    ingresa un cero y luego emitir por pantalla el m�ximo de los n�meros
    negativos y el m�nimo de los n�meros positivos.
*/
#include <stdio.h>

int main()
{
    int num;
    int maxNegative, minPositive;
    int i = 0;
    int flagPost = 0;
    int flagNegt = 0;

    while (num != 0)
    {
        printf("Ingrese un numero: ");
        scanf("%i", &num);
        
        if(num != 0)
        {
            if(num < 0)
            {
                if(!flagNegt)
                {
                    maxNegative = num;
                    flagNegt = 1;
                }
                else
                {
                    if (num < maxNegative)
                    {
                        maxNegative = num;
                    }
                }
            }
            else
            {
                if(!flagPost)
                {
                    minPositive = num;
                    flagPost = 1;
                }
                else
                {
                    if (num < minPositive)
                    {
                        minPositive = num;
                    }   
                }
            }
        }
    }

    printf("Este es el maximo de los numeros negativos: %i\nEste es el minimo de los numeros positivos: %i\n", maxNegative, minPositive);
    

    return 0;
}