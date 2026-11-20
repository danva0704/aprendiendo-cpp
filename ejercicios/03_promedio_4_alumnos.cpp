//
// Created by CSTAIT on 12/10/26.
//
#include <iostream>
using namespace std;
int main() {

    int alumno1,alumno2,alumno3,alumno4,promedio;

    cout<<"ingrese la calificacion de alumno 1: "<<endl;
    cin>>alumno1;
    cout<<"ingrese la calificacion de alumno 2: "<<endl;
    cin>>alumno2;
    cout<<"ingrese la calificacion de alumno 3: "<<endl;
    cin>>alumno3;
    cout<<"ingrese la calificacion de alumno 4: "<<endl;
    cin>>alumno4;

    promedio = (alumno1 + alumno2 + alumno3 + alumno4) / 4 ;

    cout<<"la promedio es: "<<promedio;

    return 0;
}