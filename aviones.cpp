#include <iostream>
using namespace std;

int opcion, aviones[8], ciudades[5], n_avion, n_ciudad, n_vuelo = 0;

//funcion que guarda los datos ingresados
void registrar(){
    int c_pasajeros;
    cout << "\nREGISTRAR VUELO " << n_vuelo << endl;
    cout << "Dijite el numero del avion: ";
    cin >> n_avion;
    cout << "Numero indicativo de la ciudad a la cual viajo: ";
    cin >> n_ciudad;
    cout << "Cantidad de pasajeros transportados: ";
    cin >> c_pasajeros;

    //se guardan los datos
    aviones[n_avion - 1] += c_pasajeros;
    ciudades[n_ciudad - 1] += c_pasajeros;
}

void revisa(){
    int mayor, total_pasajeros = 0;
    //revisa cuantos pasajeros viajaron en cada avion
    cout << "\nDe 8 aviones disponibles..."<< endl;
    for(int i = 0; i <= 7; i++){
        cout<<"El avion " <<i+1<< " transporto en total "<< aviones[i]<<" pasajeros"<< endl;
        //revisa cual avion transportó mas pasajeros
        if(aviones[i] > aviones[i+1])
            mayor = i;
        //se suman a los pasajeros totales
        total_pasajeros+= aviones[i];
    }
    cout << "\nEl avion que transporto mas pasajeros fue la " << mayor + 1 << endl;
    cout << "\nEl total de pasajeros transportados fue " << total_pasajeros << endl;
    //revisa a cual ciudad llegaron mas pasajeros
    for(int i = 0; i <= 4; i++){
        if(ciudades[i] > ciudades[i+1])
            mayor = i;
    }
    cout << "\nSe transpotaron mas pasajeros hacia la cuidad " << mayor + 1 << endl;
}

int main(){
    do{
        n_vuelo++;
        registrar();
        cout << "\nRegistrar otro vuelo?..\n1.Si\n2.No" << endl;
        cin >> opcion;
    } while (opcion == 1);
    revisa();
    return 0;
}
