/*
    8. Una importante cadena de delivery cuenta con una promoción por tiempo
    limitado en la que otorga un 15% de descuento sobre el total del valor de la
    compra realizada. Hacer un programa para solicitar el monto total y el mismo
    calcule y emita por pantalla el total a cobrar con el descuento aplicado.
*/
#include <stdio.h>

int main()
{
    float descuento = 0.85;
    int montoTotal;
    float totalCobrar;

    printf("Ingrese el monto total: ");
    scanf("%i", &montoTotal);

    totalCobrar = montoTotal * descuento;

    printf("Este es total a cobrar: $%.2f", totalCobrar);


    return 0;
}
