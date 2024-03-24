#include <iostream>

using namespace std;

int main() {
    int edad;

    // Solicitar la edad al usuario
    cout << "Por favor, introduce tu edad: ";
    cin >> edad;

    // Determinar si es mayor o menor de edad
    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    }
    else {
        cout << "Eres menor de edad." << endl;
    }

    return 0;
}
