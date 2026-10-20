

#
#include <iostream>
using namespace std;

int main() {
    int edad1, edad2, diferencia;

    cout << "Ingrese la edad del hermano 1: ";
    cin >> edad1;

    cout << "Ingrese la edad del hermano 2: ";
    cin >> edad2;

    if (edad1 < 0 || edad2 < 0) {
        cout << "Las edades no pueden ser negativas";
    }
    else if (edad1 > edad2) {
        diferencia = edad1 - edad2;

        cout << "El hermano mayor tiene "
             << edad1 << " años" << endl;
        cout << "El hermano menor tiene "
             << edad2 << " años" << endl;
        cout << "Diferencia: "
             << diferencia << " años" << endl;
    }
    else if (edad2 > edad1) {
        diferencia = edad2 - edad1;

        cout << "El hermano mayor tiene "
             << edad2 << " años" << endl;
        cout << "El hermano menor tiene "
             << edad1 << " años" << endl;
        cout << "Diferencia: "
             << diferencia << " años" << endl;
    }
    else {
        cout << "Ambos hermanos tienen "
             << "la misma edad" << endl;
        cout << "Diferencia: 0 años" << endl;
    }

    return 0;
}



