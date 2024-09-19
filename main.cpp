#include <stdio.h>

int main() {
    int ano_nacimiento;
    int ano_actual = 2024;
    int edad;

    printf("Introduce tu ano de nacimiento: ");
    scanf("%d", &ano_nacimiento);

    edad = ano_actual-ano_nacimiento;

    printf("Tienes %d anos: ", edad);
    return 0;
}
