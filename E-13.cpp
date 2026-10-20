
#include <iostream>
using namespace std;

int main() {
    int dia, horas, minutos, totalHoras;
    float precio, total;

    cout << "1. Lunes" << endl;
    cout << "2. Martes" << endl;
    cout << "3. Miercoles" << endl;
    cout << "4. Jueves" << endl;
    cout << "5. Viernes" << endl;
    cout << "6. Sabado" << endl;
    cout << "7. Domingo" << endl;

    cout << "Ingrese el dia: ";
    cin >> dia;

    cout << "Ingrese las horas: ";
    cin >> horas;

    cout << "Ingrese los minutos: ";
    cin >> minutos;

    if (dia < 1 || dia > 7 ||
        horas < 0 || minutos < 0 ||
        minutos > 59) {
        cout << "Datos incorrectos";
        return 0;
    }

    if (dia >= 1 && dia <= 3) {
        precio = 2;
    }
    else if (dia >= 4 && dia <= 5) {
        precio = 3;
    }
    else {
        precio = 4;
    }

    totalHoras = horas;

    if (minutos > 5) {
        totalHoras++;
    }

    total = totalHoras * precio;

    cout << "Horas a cobrar: "
         << totalHoras << endl;

    cout << "Total a pagar: S/ "
         << total << endl;

    return 0;
}



