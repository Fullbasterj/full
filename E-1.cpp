
#include <iostream>
using namespace std;

int main() {
    int opcion;
    float cantidad, resultado;

    cout << "1. Centimetros a pulgadas" << endl;
    cout << "2. Pulgadas a centimetros" << endl;

    cout << "Elija una opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Ingrese centimetros: ";
        cin >> cantidad;

        resultado = cantidad / 2.54;

        cout << "Resultado: " << resultado
             << " pulgadas" << endl;
    }
    else if (opcion == 2) {
        cout << "Ingrese pulgadas: ";
        cin >> cantidad;

        resultado = cantidad * 2.54;

        cout << "Resultado: " << resultado
             << " centimetros" << endl;
    }
    else {
        cout << "Opcion incorrecta" << endl;
    }

    return 0;
}





