/*PROGRAMA: NOMBRE Y APELLIDO*/
#include <conio.h>
#include <stdio.h>

int main()
{
    char nombre[20];
    char apellido[20];
    printf("Introduzca su nombre: ");
    scanf("%s", nombre);
     printf("Introduzca su apellido: ");
    scanf("%s", apellido);
    printf("Hola %s %s, buenos d%cas.", nombre,apellido,161);

    getch();/*pausa*/
    return 0;
}
