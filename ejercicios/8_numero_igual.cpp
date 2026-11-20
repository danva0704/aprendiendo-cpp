#include <iostream>
using namespace std;
int main() {

    int numerouno,numerodos,numerotres,numerocuatro;
    cout<<"ingrese el numero uno ";
    cin>>numerouno;

    cout<<"ingrese el numero dos ";
    cin>>numerodos;

    cout<<"ingrese el numero tres ";
    cin>>numerotres;


    cout<<"ingrese el numero cuatro ";
    cin>>numerocuatro;

    if(numerouno==numerocuatro || numerocuatro==numerodos || numerocuatro==numerotres) {
        cout<<"el numero cuatro coincide con alguno de los primeros tres numeros";
    }
    else {
        cout<<"el numero cuatro no coincide con niguno";
    }



    return 0;
}