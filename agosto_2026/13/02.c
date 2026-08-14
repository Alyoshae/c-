/*Desarollar un programa en c que calcule el area de un trapecio, introduciendo por teclado los valres en las bases y su altura, considere que pueden ser
enteros y flotantes
David sebatian heredia vazquez 1911692./*/
#include<stdio.h> 
int main(){
    float baseMa,baseMe, altura, area; 
    printf("Introduzca la medida de su base menor: ");
    scanf("%f", &baseMe);
    printf("Introduzca la medida de su base mayor: "); 
    scanf("%f", &baseMa);
    printf("Introduzca la medida de la altura de su trapecio: "); 
    scanf("%f", &altura); 
    area=(baseMa+baseMe)*altura/2;
    printf("La altura de su trapecio es: %.4f",area);
    return 0; 
}