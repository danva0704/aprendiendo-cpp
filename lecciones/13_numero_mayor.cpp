#include <iostream>
using namespace std;
int main() {

    int numero1, numero2;
    cout<<"ingrese el primero numero: "<<endl; cin>>numero1;
    cout<<"ingrese el segundo numero: "<<endl; cin>>numero2;

    if(numero1 == numero2) {
        cout<<"ambos numeros son iguales";
    }

    else if(numero1 > numero2) {
        cout<<"el primer numero es mayor que el segundo";
    }
    else {
        cout<<"el segundo numero es mayor que el primero";
    }


    return 0;
}