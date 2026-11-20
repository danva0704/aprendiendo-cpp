#include <iostream>
using namespace std;

int main() {

    float practica, teorica, participacion, notafinal=0;

    cout<<"ingrese la nota de practica: "; cin>>practica;
    cout<<"ingrese la nota de teorica: "; cin>>teorica;
    cout<<"ingrese la nota de participacion: "; cin>>participacion;

    practica*=0.30;
    teorica*=0.60;
    participacion*=0.10;

    notafinal=practica+teorica+participacion;
    cout<<"el resultado es: "<<notafinal;
    return 0;
}