/*
    4. Hacer un programa que permita ingresar los kil�metros existentes entre dos
    ciudades y la velocidad promedio de un veh�culo. Calcular y emitir por pantalla
    el tiempo aproximado que demandar� llegar de un punto a otro teniendo en
    cuenta los datos ingresados.
*/

#include <stdio.h>

int main()
{
    int km_ciudades;
    int vel_prom;
    float time_aprox;

    printf("Ingrese los kilometros que existe entre las ciudades: ");
    scanf("%i", &km_ciudades);
    printf("%i", km_ciudades);
    printf("Ingrese la velocidad promedio en km/h: ");
    scanf("%d", &vel_prom);

    time_aprox = (float) km_ciudades / vel_prom;

    printf("El tiempo aproximado para llegar de un punto a otro es: %.2f horas", time_aprox);

    return 0;
}
