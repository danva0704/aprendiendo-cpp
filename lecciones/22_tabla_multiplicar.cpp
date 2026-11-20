//
// Created by CSTAIT on 11/11/26.
//
#include <iostream>
using namespace std;
int main() {
    int numero,i=1,multiplicacion=0;
    do {
        cout<<"ingrese un numero entre el 1 y el 10"<<endl;
        cin>>numero;
    }while ( (numero>10) || (numero<1) );

    for (i=1; i<=10; i++) {
        multiplicacion=numero*i;
        cout<<numero<<" x "<<i<<" = "<<multiplicacion<<endl;
    }

    cout<<"\n";

    for (i=1; i<=10; i++) {
        cout<<numero<<" x "<<i<<" = "<<numero*i<<endl;
    }


    return 0;
}