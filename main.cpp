#include <iostream>
using namespace std;

int main() {
    int anoNacimiento, edad;
    const int anoActual = 2024;

    cout << "En qu� a�o naciste? ";
    cin >> anoNacimiento;

    edad = anoActual - anoNacimiento;

    cout << "Tienes " << edad << " a�os." << endl;

    return 0;
}
