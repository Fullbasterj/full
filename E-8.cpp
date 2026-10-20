

#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    int contador = 0;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    for (int i = 0; i < palabra.length(); i++) {

        char letra = palabra[i];

        if (letra == 'a' || letra == 'e' ||
            letra == 'i' || letra == 'o' ||
            letra == 'u' || letra == 'A' ||
            letra == 'E' || letra == 'I' ||
            letra == 'O' || letra == 'U') {

            contador++;
        }
    }

    cout << "Cantidad de vocales: "
         << contador << endl;

    return 0;
}
