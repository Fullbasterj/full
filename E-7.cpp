
#include <iostream>
using namespace std;

int main() {
    int n, edad, mayor, menor;
    int estudianteMayor, estudianteMenor;

    cout << "Ingrese cantidad de estudiantes: ";
    cin >> n;

    if (n <= 0) {
        cout << "Cantidad no valida";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese edad del estudiante "
             << i << ": ";
        cin >> edad;

        if (edad < 0) {
            cout << "Edad no valida";
            return 0;
        }

        if (i == 1) {
            mayor = edad;
            menor = edad;
            estudianteMayor = i;
            estudianteMenor = i;
        }
        else {
            if (edad > mayor) {
                mayor = edad;
                estudianteMayor = i;
            }

            if (edad < menor) {
                menor = edad;
                estudianteMenor = i;
            }
        }
    }

    cout << "Mayor edad: " << mayor
         << " (estudiante " << estudianteMayor
         << ")" << endl;

    cout << "Menor edad: " << menor
         << " (estudiante " << estudianteMenor
         << ")" << endl;

    return 0;
}
