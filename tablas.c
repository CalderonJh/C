#include <stdio.h>

int main()
{
    int numero, fin;
    printf("La tabla de que numero desea imprimir?\n");
    scanf("%i", &numero);
    printf("Hasta que valor imprimir?\n");
    scanf("%i", &fin);
    
    for (int i = 0; i <= fin; i++)
    {
        printf("\n %i x %i = %i", numero, i, i * numero);
    }
    return 0;
}