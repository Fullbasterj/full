
#include <iostream>
using namespace std;

int main() {
    int hijos, edad, escolares = 0;
    float subsidio, total;
    char viuda;

    cout << "Ingrese la cantidad de hijos: ";
    cin >> hijos;

    if (hijos < 0) {
        cout << "Cantidad incorrecta";
        return 0;
    }

    if (hijos <= 2) {
        subsidio = 200;
    }
    else if (hijos <= 5) {
        subsidio = 400;
    }
    else {
        subsidio = 600;
    }

    for (int i = 1; i <= hijos; i++) {
        cout << "Ingrese edad del hijo " << i << ": ";
        cin >> edad;

        if (edad < 0) {
            cout << "Edad incorrecta";
            return 0;
        }

        if (edad >= 3 && edad <= 18) {
            escolares++;
        }
    }

    cout << "La madre es viuda? (s/n): ";
    cin >> viuda;

    if (viuda != 's' && viuda != 'S' &&
        viuda != 'n' && viuda != 'N') {
        cout << "Respuesta incorrecta";
        return 0;
    }

    total = subsidio + escolares * 60;

    if (viuda == 's' || viuda == 'S') {
        total = total + 60;
    }

    cout << "Subsidio base: S/ "
         << subsidio << endl;

    cout << "Hijos en edad escolar: "
         << escolares << endl;

    cout << "Monto total: S/ "
         << total << endl;

    return 0;
}


