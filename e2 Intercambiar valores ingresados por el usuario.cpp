#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Eingrese en valor de a: ";
    cin >> a;
    cout << "Eingrese en valor de b: ";
    cin >> b;
    c=a;
    a=b;
    b=c;
    cout << "El valor de a es: " << a << endl;
    cout << "El valor de b es: " << b << endl;
    
}