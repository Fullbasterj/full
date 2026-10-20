
#include <iostream>
using namespace std;

int main() {
    int n, correctas, incorrectas;
    int blanco, puntaje;

    cout << "Ingrese numero de preguntas: ";
    cin >> n;

    cout << "Ingrese respuestas correctas: ";
    cin >> correctas;

    cout << "Ingrese respuestas incorrectas: ";
    cin >> incorrectas;

    if (n <= 0 || correctas < 0 ||
        incorrectas < 0 ||
        correctas + incorrectas > n) {

        cout << "Datos incorrectos" << endl;
        return 0;
    }

    blanco = n - correctas - incorrectas;

    puntaje = correctas * 10
            - incorrectas
            + blanco * 2;

    cout << "Respuestas en blanco: "
         << blanco << endl;

    cout << "Puntaje total: "
         << puntaje << endl;

    return 0;
}

