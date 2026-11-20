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
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"es una mayuscula"; break;
        default: cout<<"no es una vocal"; break;
    }

    return 0;
}