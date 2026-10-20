
#include <iostream>
using namespace std;

int main() {
    float sueldo, bono, total, porcentaje;
    int anios;

    cout << "Ingrese su sueldo: ";
    cin >> sueldo;

    cout << "Ingrese sus anios de trabajo: ";
    cin >> anios;

    if (sueldo < 0 || anios < 0) {
        cout << "Datos incorrectos" << endl;
        return 0;
    }

    if (anios < 3) {
        porcentaje = 0.08;
    }
    else if (anios >= 4 && anios <= 9) {
        porcentaje = 0.10;
    }
    else if (anios >= 10 && anios <= 15) {
        porcentaje = 0.12;
    }
    else if (anios > 16) {
        porcentaje = 0.14;
    }
    else {
        cout << "El porcentaje no esta definido"
             << endl;
        return 0;
    }

    bono = sueldo * porcentaje;
    total = sueldo + bono;

    cout << "Bonificacion: S/ " << bono << endl;
    cout << "Sueldo total: S/ " << total << endl;

    return 0;
}
