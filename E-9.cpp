
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hora, minuto, segundo;

    cout << "Ingrese la hora: ";
    cin >> hora;

    cout << "Ingrese los minutos: ";
    cin >> minuto;

    cout << "Ingrese los segundos: ";
    cin >> segundo;

    if (hora < 0 || hora > 23 ||
        minuto < 0 || minuto > 59 ||
        segundo < 0 || segundo > 59) {
        cout << "Hora incorrecta" << endl;
        return 0;
    }

    minuto = minuto + 1;

    if (minuto == 60) {
        minuto = 0;
        hora = hora + 1;
    }

    if (hora == 24) {
        hora = 0;
    }

    cout << "Un minuto despues sera: ";

    cout << setfill('0') << setw(2) << hora << ":"
         << setw(2) << minuto << ":"
         << setw(2) << segundo << endl;

    return 0;
}
