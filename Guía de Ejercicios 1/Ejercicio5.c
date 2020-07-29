/*
    5. Una casa de computación paga a sus empleados un sueldo fijo de ARS15000
    más una comisión del 5% sobre el total facturado por cada empleado. Hacer un
    programa para ingresar el total facturado por un empleado y que luego calcule
    y emita por pantalla el sueldo total a cobrar por el mismo.
*/
#include <stdio.h>

int main()
{
    int sueldo_fijo = 15000;
    float comision = 0.05;
    float sueldo_total;
    int facturado_emp;

    printf("Ingrese el total facaturado de un empleado: ");
    scanf("%i", &facturado_emp);

    sueldo_total = facturado_emp * comision + sueldo_fijo;

    printf("Este es el sueldo total a cobrar por el empleado: $%.2f", sueldo_total);

    return 0;
}
