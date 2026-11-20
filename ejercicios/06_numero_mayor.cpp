#include <iostream>
using namespace std;
int main () {

    int numero1, numero2, numero3;
    cout<<"Ingrese el primero numero: ";
    cin>>numero1;
    cout<<"Ingrese el segundo numero: ";
    cin>>numero2;
    cout<<"Ingrese el tercero numero: ";
    cin>>numero3;

    if(numero1>numero2 && numero1>numero3) {
        cout<<"El primer numero es mayor que los demas";
    }
    else if (numero2>numero1 && numero2>numero3) {
        cout<<"el segundo numero es mayor que los demas";
    }
    else if (numero3>numero1 && numero3>numero2) {
        cout<<"el tercero es mayor que los demas";
    }

    return 0;
}