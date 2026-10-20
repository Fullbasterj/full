
#include <iostream>
using namespace std;

int main() {
    float cm, pulgadas;

    cout << "Ingrese los centimetros: ";
    cin >> cm;

    pulgadas = cm / 2.54;

    cout << "El resultado es: " << pulgadas
         << " pulgadas" << endl;

    return 0;
}
