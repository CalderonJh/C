#include <iostream>
using namespace std;
int datos[50];
int main(void){
    int n, pos, value;
    bool flag;
    cout << "Insertion sort para ordenar n numeros [1, 50]" << endl;   
    do{
        cout << "Ingrese n " << endl;
        cin >> n;
        if (n <=0)
        cout << "\nQue gei, un numero mayor que cero pa\n";        
    }while(n <= 0);

    for (int i = 0; i < n; i++){
        cout << "Numero "<< i+1 << ": " << endl;
        cin >> datos[i];
    }

    // Insertion sort
    for(int i = 0; i < n; i++){
        pos = i;
        value = datos[i];

        while((pos > 0) && datos[pos -1] > value){
            datos[pos] = datos[pos -1];
            pos--;
        }
        datos[pos] = value;
    }
    cout << "\nSorted Array" << endl;
    for (int i = 0; i < n; i++){
        cout << datos[i] << " ";
    }
}