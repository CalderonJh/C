#include <iostream>
using namespace std;
 
int m[3][3], d1[3][3],d2[3][3], d3[3][3], b[3];

void print(int times);
void input();
int determina(int matriz[3][3]);
void remplaza(int columna, int d[3][3], int matriz[3][3], int vec[3]);
void resolver(int a, int b);

int main(){
    cout <<"SOLUION A SEL 3x3 -> Ax = b" << endl;
    cout << "|a11  a12  a13| |x| = b1" << endl;
    cout << "|a21  a22  a23| |y| = b2" << endl;
    cout << "|a31  a32  a33| |z| = b2" << endl;
    // recoge datos
    input();
    // calcula determinante
    int determinante = determina(m);
    cout << "\nEl determinante de la matriz es "<< determinante << endl;
    if(determinante == 0){
        cout << "El sistema no tiene solucion unica...";
        return 0;
    }
    
    remplaza(0, d1, m, b);
    remplaza(1, d2, m, b);
    remplaza(2, d3, m, b);

    cout << "\nx: ";
    resolver(determina(d1), determinante);
    cout << "\ny: ";
    resolver(determina(d2), determinante);
    cout << "\nz: ";
    resolver(determina(d3), determinante);

    return 0;
}


//entrada de datos
void input(){
    for (int i = 0;  i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "\na"<<i+1<<j+1<<": ";
            cin >> m[i][j];
        }
        cout << "\nIngrese b"<< i+1 << endl;
        cin >> b[i];
        print(i+1);
    }
}


void print(int times){
    if(times == 1){
        system("CLEAR");
        cout << "| "<< m[0][0] << "    " << m[0][1] << "    " << m[0][2] << "| "<<"|x|"<<" = "<< b[0]<< endl;
        cout << "|a21  a22  a23| |y| = b2" << endl;
        cout << "|a31  a32  a33| |z| = b2" << endl;
    }else if(times == 2){
        system("CLEAR");
        cout << "| "<< m[0][0] << "    " << m[0][1] << "    " << m[0][2] << "| "<<"|x|"<<" = "<< b[0]<< endl;
        cout << "| "<< m[1][0] << "    " << m[1][1] << "    " << m[1][2] << "| "<<"|y|"<<" = "<< b[1]<< endl;
        cout << "|a31  a32  a33| |z| = b2" << endl;
    }else if(times == 3){
        system("CLEAR");
        cout << "| "<< m[0][0] << "    " << m[0][1] << "    " << m[0][2] << "| "<<"|x|"<<" = "<< b[0]<< endl;
        cout << "| "<< m[1][0] << "    " << m[1][1] << "    " << m[1][2] << "| "<<"|y|"<<" = "<< b[1]<< endl;
        cout << "| "<< m[2][0] << "    " << m[2][1] << "    " << m[2][2] << "| "<<"|z|"<<" = "<< b[2]<< endl;
        system("PAUSE");
    }

}


//calculara el determinante de la matriz ingresada
//si el determinante es cero el sel no tendrá solución unica
int determina(int matriz[3][3]){
    int det, s1, s2, s3, s4, s5 ,s6;
    s1 = matriz[0][0] * matriz[1][1] * matriz[2][2];
    s2 = matriz[0][1] * matriz[1][2] * matriz[2][0];
    s3 = matriz[0][2] * matriz[1][0] * matriz[2][1];
    s4 = matriz[2][0] * matriz[1][1] * matriz[0][2];
    s5 = matriz[2][1] * matriz[1][2] * matriz[0][0];
    s6 = matriz[2][2] * matriz[1][0] * matriz[0][1];
    det = (s1 + s2 + s3) - (s4 + s5 + s6);
    return det;
}


//la funcion crea las matrices necesarias para resolver el sel
//usando la regla de cramer
void remplaza(int columna, int d[3][3], int matriz[3][3], int vec[3]){
    /*dos columnas de la matriz d tomara los valores de la matriz ingresada
    por el usuario, la otra columna sera el vecor b*/
    for (int i = 0;  i < 3; i++){
        for(int j = 0; j < 3; j++){
            d[i][j] = matriz[i][j];
        }    
    }
    for(int i = 0; i < 3; i++){
        d[i][columna] = vec[i];
    }
}


//presenta la solución al sel de ser posible
void resolver(int a, int b){
    if(a % b == 0){
        cout << a/b;
    }else{
        cout << a << "/"<< b;
    }
}