/*
    8. El negocio de desinfectante antes mencionado vende además detergente
    suelto, y los precios se aplican según la siguiente escala:
        a. 25 ARS por litro los primeros 50 litros.
        b. 20 ARS por litro si la venta es de 101 a 200 litros.
        c. 15 ARS por litro si la venta es de 201 a 500 litros.
        d. 10 ARS por litro si la venta es de más de 500 litros.
    Además, si paga en efectivo, tiene un adicional del 10% sobre el importe final.
    Hacer un programa que solicite la cantidad de litros vendidos y el tipo de pago
    (ingresará 1 si paga en efectivo y 0 con cualquier otro medio de pago) y calcule
    y emita por pantalla el monto final a abonar por el cliente.
*/
#include <stdio.h>

int main()
{
    int cantLts;
    int tipoPago;
    float impFinal;
    float desc = 0.90;

    printf("Ingrese la cantidad de litros vendidos: ");
    scanf("%i", &cantLts);

    printf("\nIngrese el tipo de pago\n\n1) Efectivo\n0) Otro medio de pago\n");
    printf("\nDigite la opcion: ");
    scanf("%i", &tipoPago);

//Evaluacion de precio final en base a la cantidad de litros vendidos
    if(cantLts >= 50)
    {
        if(cantLts > 100)
        {
            if(cantLts < 201)
            {
                impFinal = cantLts * 20;
            }
            else
            {
                if(cantLts > 200)
                {
                    if(cantLts < 501)
                    {
                        impFinal = cantLts * 15;
                    }
                    else
                    {
                        impFinal = cantLts * 10;
                    }
                }
                else
                {
                    impFinal = cantLts * 20;
                }
            }

        }
        else
        {
            impFinal = cantLts * 25;
        }
    }
    else
    {
        impFinal = cantLts * 25;
    }
//opcion de pago
    if(tipoPago == 1)
    {
        impFinal = impFinal * desc;
        printf("importe de venta es %.2f", impFinal);
    }
    else
    {
        if(tipoPago == 0)
        {
            printf("Importe de venta es %.2f", impFinal);
        }
    }


    return 0;
}
