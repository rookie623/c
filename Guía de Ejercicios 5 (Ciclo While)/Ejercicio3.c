/*
    3. Hacer un programa que solicite la edad de un grupo de personas. El programa
    deberá pedir edades hasta que se ingrese una edad menor a 18 años. Deberá
    mostrar por pantalla cuántas personas mayores se registraron.
*/
#include <stdio.h>

int main()
{
    int edad = 19;
    int mayores;

    while(edad >= 18)
    {
        printf("\nIngrese su edad: ");
        scanf("%i", &edad);

        if(edad >= 18)
        {
            mayores++;
        }

    }

    printf("Se registraron %i", mayores);

    return 0;
}
