//
// Created by CSTAIT on 12/10/26.
//
#include <iostream>
using namespace std;
int main() {
    int a, b , aux ;
    cout<<"ingresa el valor de a"<<endl;
    cin>>a;
    cout<<"ingresa el valor de b"<<endl;
    cin>>b;

    aux= b;
    b=a;
    a=aux;

    cout<<" el valor de a= "<<a<<endl;
    cout<<" el valor de b= "<<b<<endl;

    return 0;

}