#include <iostream>
#include <iostream>
using namespace std;
int main() {
    char letra;
    cout<<"ingresa un caracter"<<endl;
    cin>>letra;

    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"es una minuscula"; break;
        default: cout<<"no es una minuscula"; break;
    }

    return 0;
}