#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char nombre[15];
    cin.getline(nombre, 15, '\n');
    cout << nombre;
    struct ColeccionCD{
        char title[30];
        int nSongs;
    } cd1;

    cd1 = {"Finisterra", 15};
    return 0;
}
