//
// Created by CSTAIT on 20/10/26.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float cateto1, cateto2, hipotenusa=0;
    cout<<"ingrese el valor de cateto 1: "<<endl;
    cin>>cateto1;
    cout<<"ingrese el valor de cateto 2: "<<endl;
    cin>>cateto2;
    hipotenusa = sqrt((cateto1*cateto1) + (cateto2*cateto2));

    cout<<"la hipotenusa es: "<<hipotenusa;

    return 0;

}