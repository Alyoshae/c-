#include <stdio.h> 

/*si el cleinte es de tipo 1 se descuenta 5
si el cliente es de tipo 2 se descuenta 9
3 = 12
4 = 15 
cada compra pide 
nombre del cliente
tipo de cliente 
cantidad de hojas compradas 
precio por hoja 
*/

int main(){
    char nombre[30];
    int tipoCliente, cantHojas;
    float precio,descuento, total; 
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    while(1){
        printf("Ingrese el tipo de cliente que es: ");
        scanf("%d", &tipoCliente);
        if(tipoCliente >= 1 && tipoCliente <=4){
            break;}
        else{
            printf("Ingrese un numero valido\n");
        }
    }
    while(1){
        printf("Ingrese hojas quiere comprar: "); 
        scanf("%d", &cantHojas);
        if(cantHojas <= 0){
            printf("Ingrese una cantidad de hojas mayor a 0 pls");
            continue;
        }
        else{break;} 
    }
    while(1){
        printf("Ingrese la cantidad que quiere pagar por cada hoja: ");
        scanf("%f", &precio);
        if(precio <= 0){
            printf("Ingrese una cantidad a pagar por hoja mayor a 0"); 
            continue;
        }
        else{break;}
    }

    switch(tipoCliente)
    {
        case 1: 
            descuento = .05; 
            break;
        case 2: 
            descuento = .09; 
            break;
        case 3:  
            descuento = .12; 
            break;
        case 4: 
            descuento = .15; 
            break; 
    }
    total = cantHojas*precio;
    printf("\n\n%s\nSUBTOTAL A PAGAR: $%.2F\nDESCUENTO: $%.2f\nNETO A PAGAR: %.2f\n\n",nombre,(total),(total-descuento),(total*descuento));
    return 0;
}