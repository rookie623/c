/*
    7. Hacer un programa para ingresar por teclado los metros cuadrados totales de
    un predio y los metros cuadrados cubiertos; luego calcular y mostrar por
    pantalla el porcentaje de metros cuadrados cubiertos y el porcentaje de
    metros cuadrados descubiertos.
*/
#include <stdio.h>

int main()
{
    int metrosCuadrados;
    int metrosCuadradosCubiertos;
    int metrosCuadrarosDescubiertos;
    int porcentajeMetrosCuadrarosCubiertos;
    int porcentajeMetrosCuadrarosDescubiertos;

    printf("Ingrese los metros cuadrados totales del predio: ");
    scanf("%i", &metrosCuadrados);
    printf("Ingrese los metros cuadrados cubiertos: ");
    scanf("%i", &metrosCuadradosCubiertos);

    porcentajeMetrosCuadrarosCubiertos = (metrosCuadradosCubiertos * 100) / metrosCuadrados;
    metrosCuadrarosDescubiertos = metrosCuadrados - metrosCuadradosCubiertos;
    porcentajeMetrosCuadrarosDescubiertos = (metrosCuadrarosDescubiertos * 100) / metrosCuadrados;

    printf("Este es el porcentaje de metros cuadrados cubiertos del predio: %i\n", porcentajeMetrosCuadrarosCubiertos);
    printf("Este es el porcentaje de metros cuadrados cubiertos del predio: %i", porcentajeMetrosCuadrarosDescubiertos);

    return 0;
}
