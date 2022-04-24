#include "header.h"

int main()
{
    char palabra[20] = {"amarillo"};
    char palabra2[20];
    int cant = 20;
    miStrcpy(palabra, palabra2, cant);
    mostrarVector(palabra2, cant);
    return 0;
}
