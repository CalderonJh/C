#include <stdio.h>
#include <stdlib.h>

int binario[20], entrada, base, i;

int main(){
    printf("Ingrese el numero base 10\n");
    scanf("%d", &entrada);
    base = entrada;

    for ( i = 0; base > 0; i++){
        binario[i] = base % 2;
        base /= 2;
    }
    
    printf("%d en binario es: ",entrada);
    for (i = i-1; i >= 0; i--){
        printf("%d", binario[i]);
    }

    
}