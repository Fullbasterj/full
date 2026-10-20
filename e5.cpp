
#include <iostream>
using namespace std;

int main() {
    float examen, practicas, proyecto;
    float promedio;

    cout << "Ingrese nota del examen: ";
    cin >> examen;

    cout << "Ingrese nota de practicas: ";
    cin >> practicas;

    cout << "Ingrese nota del proyecto: ";
    cin >> proyecto;

    promedio = examen * 0.50 +
               practicas * 0.30 +
               proyecto * 0.20;

    cout << "Promedio final: " << promedio << endl;

}

