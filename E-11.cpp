
#include <iostream>
using namespace std;

int main() {
    float a, b, resultado;
    char operacion;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> operacion;

    if (operacion == '/' && b == 0) {
        cout << "No se puede dividir entre cero";
        return 0;
    }

    switch (operacion) {
        case '+':
            resultado = a + b;
            break;

        case '-':
            resultado = a - b;
            break;

        case '*':
            resultado = a * b;
            break;

        case '/':
            resultado = a / b;
            break;

        default:
            cout << "Operacion incorrecta";
            return 0;
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}


