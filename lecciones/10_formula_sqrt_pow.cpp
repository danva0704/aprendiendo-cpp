//
// Created by CSTAIT on 20/10/26.
//
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float x,y,resultado=0;

    cout<<"Ingrese x: "; cin>>x;
    cout<<"Ingrese y: "; cin>>y;

    resultado = (sqrt(x)) / (pow(y,2)-1);
    cout<<"f("<<x<<","<<y<<")="<<resultado;

    return 0;

}