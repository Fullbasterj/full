
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, s, area;

    cout << "Ingrese lado A: ";
    cin >> a;

    cout << "Ingrese lado B: ";
    cin >> b;

    cout << "Ingrese lado C: ";
    cin >> c;

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a) {

        s = (a + b + c) / 2;

        area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "El area es: " << area << endl;
    } else {
        cout << "No forman un triangulo valido" << endl;
    }

    return 0;
}
