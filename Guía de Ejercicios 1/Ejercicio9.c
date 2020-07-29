/*
    9. Una universidad desea conocer los porcentajes de mujeres y hombres en las
    carreras de ciencias exactas. Se solicita un programa para cargar la cantidad de
    mujeres y la cantidad de hombres y que el mismo calcule y emita por pantalla
    los porcentajes correspondientes.
*/
#include <stdio.h>

int main()
{
    int cant_mujeres, cant_hombres;
    float porc_mujeres, porc_hombres;

    printf("Ingrese la cantidad de mujeres: ");
    scanf("%i", &cant_mujeres);

    printf("Ingrese la cantidad de hombres: ");
    scanf("%i", &cant_hombres);

    porc_mujeres = (cant_mujeres * 100) / (cant_hombres + cant_mujeres);
    porc_hombres = (cant_hombres * 100) / (cant_hombres + cant_mujeres);

    printf("Este es el porcentaje de mujeres en la carrera: %.2f\n", porc_mujeres);
    printf("Este es el porcentaje de hombres en la carrera: %.2f", porc_hombres);

    return 0;
}
