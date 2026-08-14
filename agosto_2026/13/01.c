/*Desarollar un programa en C que dada un acantidad en pesos convierta esa cantidad en euros y en dolares, e inprimir el resultado, considere que los 
alores pueden ser enteros o flotantes
David Sebastian Heredia Vazquez 1911692*/
#include<stdio.h> 
int main(){ 
    float dolar = 17.15;
    float euro = 19.79;
    float x,y;
    printf("Cuantos pesos desea ingresar: ");
    scanf("%f",&x); 
    y=x/dolar;
    printf("sus pesos en dolares = %.3f",y);
    y=x/euro;
    printf("$\nsus pesos en euros = %.3f$", y); 
    return 0;
}