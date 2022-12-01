#include <iostream>
#include <stdlib.h>
using namespace std;

int *datos, n;
int main(void){
    int aux;
    bool flag;
    cout << "Metodo burbuja para ordenar n numeros. " << endl;   
    do{
        cout << "Ingrese n " << endl;
        cin >> n;
        if (n <=0)
        cout << "\nQue gei, un numero mayor que cero pa\n";        
    }while(n <= 0);

    datos = new int[n];
    for (int i = 0; i < n; i++){
        cout << "Numero "<< i + 1 << ": " << endl;
        cin >> datos[i];
    }

    // this is the bubble sort
    for (int i = 0; i < n - 1 ; i++){
        flag = false;
        for(int j = 0; j < n - i - 1; j++ ){
            if (datos[j] > datos[j+1]){
                aux = datos[j];
                datos[j] = datos[j+1];
                datos[j+1] = aux;
                flag = true;
            }
        }
        if(!flag){
            // no cambios
            break;
        }
    }
    cout << "\nSorted Array" << endl;
    for (int i = 0; i < n; i++){
        cout << datos[i] << " ";
    }
    delete[] datos;
    return 0;

}    