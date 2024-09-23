#include <iostream>
using namespace std;

int main() {
    int anoNacimiento, edad;
    const int anoActual = 2024;

    cout << "En qué año naciste? ";
    cin >> anoNacimiento;

    edad = anoActual - anoNacimiento;

    cout << "Tienes " << edad << " años." << endl;

    return 0;
}
