#include <stdio.h>
#include <stdlib.h>

void imprimir(int indice, char* lugar){
    char cosa[30];
    for(int i = 0; i < 30; i++) cosa[i] = lugar[i+30*indice];
    printf("%s", cosa); 
}

void asignarValor(int indice, char* lugar, char cadena[]){
    int longitud = sizeof(*cadena)/sizeof(char);
    printf("%i", longitud);
    for(int i = 0; i < longitud; i++) lugar[i+30*indice] = cadena[i];
}

int main(){
    int resp;
    char cosa[30];
    /*
        Que scanf use punteros siempre me pone nervioso
        Al hacer input con printf, el espacio o tab cuenta como 
        caracter de terminar, por ello se ocupa usar fgets
        
        
        printf("Holamundo\n");
        fgets(cosa, sizeof(cosa), stdin);
        
        printf("su primer caracter es un %s\n", cosa);
    */
    char* arreglo;
    arreglo = calloc(10, 10 * sizeof(char) * 30);

    arreglo = "Holamundo";
    asignarValor(0, arreglo, "Mueranse todos?");
    imprimir(0, arreglo);
    return 0; 
}