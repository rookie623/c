/*
    6. Hacer un programa para ingresar por teclado la longitud de los tres lados de un
    tri�ngulo y que luego determine e informe con un cartel aclaratorio a qu� tipo
    de tri�ngulo corresponde:
        a. Equil�tero: cuando los tres lados sean iguales.
        b. Is�sceles: cuando dos de los tres lados sean iguales.
        c. Escaleno: cuando todos los lados sean distintos.
*/
#include <stdio.h>

int main()
{
    int lado1, lado2, lado3;

    printf("Ingrese el primer lado: ");
    scanf("%i", &lado1);

    printf("Ingrese el segundo lado: ");
    scanf("%i", &lado2);

    printf("Ingrese el tercer lado: ");
    scanf("%i", &lado3);


    if(lado1 == lado2)
    {
        if(lado1 == lado3)
        {
            if(lado2 == lado3)
            {
                printf("El triangulo es equilatero");
            }
            else
            {
                printf("El triangulo es Isosceles");
            }
        }
        else
        {
            printf("El triangulo es Isosceles");
        }
    }
    else
    {
        if(lado1 == lado3)
        {
            printf("El triangulo es Isosceles");
        }
        else
        {
            printf("El triangulo es Escaleno");
        }
    }


    return 0;
}
