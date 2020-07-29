/*
    12. Hacer un programa para ingresar un valor que estará expresado en minutos. Si
    los minutos superan los 60, pasar el valor a horas, de lo contrario dejarlo en
    minutos. Mostrar el resultado en pantalla aclarando si se muestran minutos u
    horas.
*/
#include <stdio.h>

int main()
{
    int minIng;
    float horas;

    printf("Ingre el valor en minutos: ");
    scanf("%i", &minIng);

    if(minIng > 60)
    {
        horas = (float) minIng / 60;
        printf("El resultado %f esta expresado en horas", horas);
    }
    else
    {
        printf("El resultado %i esta expresado en minutos", minIng);
    }

    return 0;
}
