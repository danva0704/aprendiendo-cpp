//
// Created by CSTAIT on 06/11/26.
//
#include <iostream>
using namespace std;
int main() {
    int opcion;
    float ingresado,saldo =1000, retiro;
    cout<<"\t Bienvenido a su cajero automatico"<<endl;
    cout<<"1. ingresar dinero en su cuenta"<<endl;
    cout<<"2. retirar dinero de su cuenta"<<endl;
    cout<<"3. salir"<<endl;
    cout<<"Selecciona una opcion: "<<endl;
    cin>>opcion;

    switch(opcion) {

        case 1:
            cout<<"digite la cantidad de dinero a ingresar:  "<<endl;
            cin>>ingresado;
            saldo=ingresado+saldo;
            cout<<"saldo en cuenta: "<<saldo<<endl;
            break;
        case 2:
            cout<<"cantidad de dinero a retirar:  "<<endl;
            cin>>retiro;
            if (retiro>saldo) {
                cout<<"su retiro es mayor a su saldo"<<endl;
            }
            else {
                saldo=saldo-retiro;
                cout<<"saldo en cuenta: "<<saldo<<endl;
            }
            break;
            case 3:
            cout<<"hasta luego "<<endl;
            break;




    }




    return 0;
}