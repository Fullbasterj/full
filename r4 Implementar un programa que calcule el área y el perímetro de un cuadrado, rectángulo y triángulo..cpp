
#include <iostream>
using namespace std;

int main() {
    float lado, base, altura;
    float lado2, lado3;
    float area, perimetro;

    // CUADRADO
    cout << "CUADRADO" << endl;
    cout << "Ingrese el lado: ";
    cin >> lado;

    area = lado * lado;
    perimetro = 4 * lado;

    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;

    // RECTANGULO
    cout << "\nRECTANGULO" << endl;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);

    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;

    // TRIANGULO
    cout << "\nTRIANGULO" << endl;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    cout << "Ingrese el lado 2: ";
    cin >> lado2;
    cout << "Ingrese el lado 3: ";
    cin >> lado3;

    area = (base * altura) / 2;
    perimetro = base + lado2 + lado3;

    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;

    return 0;
}
