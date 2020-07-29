/*
    4. Un importante negocio de desinfectante líquido realiza descuentos
    dependiendo de la cantidad de litros vendidos según la siguiente escala:
        a. Si vende menos de 100 litros, no hay descuento.
        b. Si vende entre 101 y 300 litros, el descuento es del 10%.
        c. Si vende entre 301 y 500 litros, el descuento es del 15%.
        d. Finalmente, si la venta es de más de 500 litros, el descuento es del 25%.
    Hacer un programa que solicite el ingreso del importe total de la venta y la
    cantidad de litros vendidos y calcule y emita el importe con el descuento
    aplicado.
*/
#include <stdio.h>

int main()
{
    int impTotal, cantLts;
    float impFinal;

    float desMenor = 0.90;
    float desMedio = 0.85;
    float desMayor = 0.75;

    printf("Ingrese el importe total de la venta: ");
    scanf("%i", &impTotal);

    printf("Ingrese cantidad de litros vendidos: ");
    scanf("%i", &cantLts);

    if(cantLts < 100)
    {
        impFinal = impTotal;
        printf("El importe final de venta es: %.2f", impFinal);
    }
    else if(cantLts > 100 && cantLts <= 300)
    {
        impFinal = impTotal * desMenor;
        printf("El importe final de venta es: %.2f", impFinal);
    }
    else if(cantLts > 300 && cantLts <= 500)
    {
        impFinal = impTotal * desMedio;
        printf("El importe final de venta es: %.2f", impFinal);
    }
    else if(cantLts > 500)
    {
        impFinal = impTotal * desMayor;
        printf("El importe final de venta es: %.2f", impFinal);
    }

    return 0;
}
