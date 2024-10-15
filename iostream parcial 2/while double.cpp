#include <stdio.h>
#include <conio.h>

int main() {
    double num, suma = 0;

    printf("Ingresa un número (0 para terminar): ");
    scanf("%d", &num);

    while (num != 0) {
        suma += num;
        printf("Ingresa un número (0 para terminar): ");
        scanf("%d", &num);
    }

    printf("La suma total es: %d", suma);
    getch();
    return 0;
}
