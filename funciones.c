#include "header.h"

void miStrcpy(char palabra[], char palabra2[], int cant){
    int i;
    for(i=0; i<cant; i++){
        palabra2[i] = palabra[i];
    }
}

void mostrarVector(char palabra2[], int cant){
    int i;
    for(i=0; i<cant; i++){
        printf("%c ", palabra2[i]);
    }

}
