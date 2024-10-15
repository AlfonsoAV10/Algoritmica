#include <stdio.h>

int main() {
    char operador;
    float num1, num2;

    // Solicitar la operaci�n y los n�meros
    printf("Ingrese una operaci�n (+, -, *, /): ");
    scanf(" %c", &operador);  // Espacio antes de %c para evitar problemas con el buffer

    printf("Ingrese dos n�meros: ");
    scanf("%f %f", &num1, &num2);

    // Usar if para cada operaci�n
    if (operador == '+')
        printf("Resultado: %.2f\n", num1 + num2);
    else if (operador == '-')
        printf("Resultado: %.2f\n", num1 - num2);
    else if (operador == '*')
        printf("Resultado: %.2f\n", num1 * num2);
    else if (operador == '/')
        if (num2 != 0)
            printf("Resultado: %.2f\n", num1 / num2);
        else
            printf("Error: Divisi�n por cero\n");
    else
        printf("Operaci�n no v�lida\n");

    return 0;
}
