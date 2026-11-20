#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "ingrese el valor de a "; cin >> a;
    cout << "ingrese el valor de b "; cin >> b;
    cout << "ingrese el valor de c "; cin >> c;

    double d  = pow(b, 2) - 4 * a * c;
    double ad = pow(pow(d, 2), 0.5);        // |d|
    double re = pow((d + ad) / 2, 0.5);     // raíz de max(d,0)
    double im = pow((ad - d) / 2, 0.5);     // raíz de max(-d,0)

    double x1r = (-b + re) / (2 * a), x1i =  im / (2 * a);
    double x2r = (-b - re) / (2 * a), x2i = -im / (2 * a);

    cout << "el valor de x1 es: " << x1r << showpos << x1i << "i" << noshowpos << endl;
    cout << "el valor de x2 es: " << x2r << showpos << x2i << "i" << noshowpos << endl;

    return 0;
}