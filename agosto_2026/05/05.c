#include <stdio.h> 
/* Tabla para celcius y farenheit */

void imprimir_tabla(float,float,float); 

int main(){

    int fah, cel;
    int lower, upper, step; 
    lower = 0; 
    upper = 300; 
    step = 20; 

    printf("\nImpresion de la tabla original\n\n");
    fah = lower; 
    while(fah <= upper){
        cel = 5*(fah-32)/9;
        printf("%d\t%d\n",fah,cel);  /*%d es un place holder para las variables int que se quieren imprimir, normalmente de izquierda a derecha.*/
        fah = fah+step;
    }

    printf("\nAhora Imprime la misma tabla por llamada de funcion y los valores de d alrevez\n\n");
    imprimir_tabla(0,300,20);

    return 0; 
}

void imprimir_tabla(float l, float u, float s){
    float f,c;
    f = l; 
    while(f <= u){
        c = (5.0/9.0)*(f-32.0);
        printf("%3.0f\t%1.1f\n", f, c); /*%f es para floats, y el numero que viene al lado es el numero de renglones y despues del punto, el numero de decimales.*/
        f = f+s;
    }
}

