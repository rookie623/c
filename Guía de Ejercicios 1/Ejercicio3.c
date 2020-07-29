#include <stdio.h>

/*3. Hacer un programa que permita ingresar el año actual y el año de la fecha de
nacimiento de una persona y luego calcule y emita por pantalla su edad.
Nota: no hay que tener en cuenta si la persona cumplió años o no,
simplemente calcular.*/

int main()
{
    int current_year;
    int birth_year;
    int age;

    printf("Ingrese el año actual: ");
    scanf("%d", &current_year);

    printf("Ingrese el año de nacimiento: ");
    scanf("%d", &birth_year);

    age = current_year - birth_year;

    printf("Tu edad es: %d", age);

    return 0;
}
