//
// Created by CSTAIT on 11/11/26.
//
#include <iostream>
using namespace std;
int main () {
    int numero,i=0;
    do {
        cout<<"Introduzca un numero: ";
        cin>>numero;
        i++;
    }while (numero != 0);
    i--;
    cout<<"la cantidad de numeros ingresados mayores a 0 son: "<<i<<endl;
    return 0;
}

