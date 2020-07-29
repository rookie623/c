/*
    6. Una casa de video juegos otorga un descuento dependiendo del importe de la
    compra realizada según los siguientes valores:
    * Si el importe es menor a ARS 1000, no hay descuento.
    * Si el importe es ARS 1000 o más pero menor a ARS 5000, aplica un
    descuento del 10%.
    * Si el importe es ARS 5000 o más, aplica un descuento del 18%.
    Hacer un programa para ingresar un importe de venta y luego muestre por
    pantalla el importe final con el descuento que corresponda.
*/
#include <stdio.h>

int main()
{
    float descMenor = 0.90;
    float descMayor = 0.82;
    int impVenta;
    int promoMin = 1000;
    int promoMax = 5000;
    float impFinal;

    printf("Ingrese el importe de venta: ");
    scanf("%i", &impVenta);

    if(impVenta < promoMin)
    {
        printf("Importe final a pagar: %i", impVenta);
    }
    else if (impVenta >= promoMin && impVenta <= promoMax)
    {
        impFinal = impVenta * descMenor;
        printf("Importe final a pagar: %.0f", impFinal);
    }
    else if(impVenta > promoMax)
    {
        impFinal = impVenta * descMayor;
        printf("Importe final a pagar: %.0f", impFinal);
    }

    return 0;
}
