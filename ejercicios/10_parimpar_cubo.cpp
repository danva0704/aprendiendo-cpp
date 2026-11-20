//
// Created by CSTAIT on 06/11/26.
//
#include <iostream>
using namespace std;
int main() {
    int opcion, numero;
    cout<<"bienvenido usuario"<<endl;
    cout<<"digite una de las siguientes opciones"<<endl;
    cout<<"1. saber el cubo de un numero"<<endl;
    cout<<"2. saber si un numero es par o impar"<<endl;
    cout<<"3. salir"<<endl;
    cin>>opcion;

    switch (opcion) {

        case 1:
            cout<<"CUBO DE UN NUMERO"<<endl;
            cout<<"digite una numero"<<endl;
            cin>>numero;

            cout<<"el cubo de: "<<numero;
            numero=5*5*5;
            cout<<" es: "<<numero<<endl;
            break;
        case 2:
            cout<<"NUMERO PAR O IMPAR"<<endl;
            cout<<"Ingresa un numero: ";
            cin>>numero;

            if (numero%2 == 0) {
                cout<<"el numero "<<numero<<" es par";
            }
            else {
                cout<<"el numero "<<numero<<" es impar";
            }
            break;
        case 3:
            cout<<"vuelva pronto"<<endl;
            break;


    }


    return 0;
}