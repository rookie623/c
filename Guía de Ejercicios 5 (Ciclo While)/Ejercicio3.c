/*
    3. Hacer un programa que solicite la edad de un grupo de personas. El programa
    deber� pedir edades hasta que se ingrese una edad menor a 18 a�os. Deber�
    mostrar por pantalla cu�ntas personas mayores se registraron.
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
