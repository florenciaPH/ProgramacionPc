#include <stdio.h>

int edad=0;
int destino=0;


int main(){
    // PEDIR EDAD (número entero)
    printf("Ingrese su edad por favor");
    scanf("%d", &edad);
    // PEDIR DESTINO (número entero: 1 - 2 - 3)
    // REVISAR TABLA
    printf("Ingrese uno de los destinos por favor");
    scanf("%d", &destino);
   
    if(edad < 15){

        if(destino == 1){
          printf("2500\n"); 
}
        else if(destino ==2){
            printf("1200\n");
}
        else if(destino  ==3){
            printf("2000");
            }
            }

    if(edad > 65){

        if(destino == 1){
          printf("3000\n"); 
}
        else if(destino == 2){
            printf("2000\n");
}
        else if(destino  == 3){
            printf("2500");
}    
    
}

if((edad < 65) && (edad > 15)){

        if(destino == 1){
          printf("4200\n"); 
}
        else if(destino == 2){
            printf("3000\n");
}
        else if(destino  == 3){
            printf("3800");
}            
}

return 0;
}