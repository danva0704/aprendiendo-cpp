//
// Created by CSTAIT on 22/09/26.
//

#include <iostream>
using namespace std;
int main() {
    int numero_uno, numero_dos, suma, resta, multiplicacion, division;
    cout << "Introduzca un numero: ";
    cin >> numero_uno;
    cout << "Introduzca un numero dos: ";
    cin >> numero_dos;

    suma = numero_uno + numero_dos;
    resta = numero_uno - numero_dos;
    multiplicacion = numero_uno * numero_dos;
    division = numero_uno / numero_dos;

    cout << "el resultado de la suma de sus dos numeros es: " << suma <<endl;
    cout << "el resultado de su resta es: "<< resta << endl;
    cout << "el resultado de su multiplicacion es: " << multiplicacion << endl;
    cout << "el resultado de su division es: " << division << endl;
    return 0;
}
