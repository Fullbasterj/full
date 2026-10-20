

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int opcion;
    float lado, base, altura;
    float a, b, c, s, radio;
    float area, perimetro;
    const float pi = 3.1416;

    cout << "1. Cuadrado" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Triangulo" << endl;
    cout << "4. Circulo" << endl;

    cout << "Elija una opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Ingrese el lado: ";
        cin >> lado;

        area = lado * lado;
        perimetro = 4 * lado;
    }
    else if (opcion == 2) {
        cout << "Ingrese la base: ";
        cin >> base;
        cout << "Ingrese la altura: ";
        cin >> altura;

        area = base * altura;
        perimetro = 2 * (base + altura);
    }
    else if (opcion == 3) {
        cout << "Ingrese lado A: ";
        cin >> a;
        cout << "Ingrese lado B: ";
        cin >> b;
        cout << "Ingrese lado C: ";
        cin >> c;

        if (a <= 0 || b <= 0 || c <= 0 ||
            a + b <= c || a + c <= b ||
            b + c <= a) {
            cout << "Triangulo no valido";
            return 0;
        }

        s = (a + b + c) / 2;
        area = sqrt(s * (s-a) * (s-b) * (s-c));
        perimetro = a + b + c;
    }
    else if (opcion == 4) {
        cout << "Ingrese el radio: ";
        cin >> radio;

        area = pi * radio * radio;
        perimetro = 2 * pi * radio;
    }
    else {
        cout << "Opcion incorrecta";
        return 0;
    }

    if (opcion != 3 && 
        (opcion == 1 && lado <= 0 ||
         opcion == 2 && (base <= 0 || altura <= 0) ||
         opcion == 4 && radio <= 0)) {
        cout << "Las medidas deben ser positivas";
        return 0;
    }

    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;

    return 0;
}
