
#include <iostream>
using namespace std;

int main() {
    float velocidad, tiempo, distancia;

    cout << "Ingrese la velocidad en km/h: ";
    cin >> velocidad;

    cout << "Ingrese el tiempo en horas: ";
    cin >> tiempo;

    distancia = velocidad * tiempo;

    cout << "La distancia recorrida es: "
         << distancia << " km" << endl;

}

