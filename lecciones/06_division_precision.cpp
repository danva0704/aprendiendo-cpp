//
// Created by CSTAIT on 25/09/26.
//
#include <iostream>
using namespace std;

int main() {
    float a , b , resultado =0 ;

    cout<<"ingrese el valor de a: "; cin>>a;
    cout<<"ingrese el valor de b: "; cin>>b;

    resultado = (a/b) + 1;
    cout.precision(2);
    cout <<"\n el resultado es: "<< resultado << endl;

    return 0;
}