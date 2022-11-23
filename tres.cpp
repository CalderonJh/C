//ordena tres numeros usando condicionales
#include <iostream>
using namespace std;

int main(void){
    int a, b, c, aux1, aux2;
    cout << " Ingrese 3 numeros.." <<endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (b > a){
        aux1 = a;
        a = b;
        b = aux1;
    } // en este punto a >= b, entonces revisar c
    if(c > a){
        //cab -> abc
        aux1 = a;
        aux2 = b;
        a = c;
        b = aux1;
        c = aux2;
    }else if (c < a & c >= b){
        //acb -> abc
        aux1 = b;
        b = c;
        c = aux1;
    }
    cout << a << " " << b << " " << c;
    return 0;
}
