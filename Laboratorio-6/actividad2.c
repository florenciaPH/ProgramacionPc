#include <stdio.h>

int main(){

    int numero1=0;
    int numero2=0;
    int numero3=0;

    printf("Ingrese un numero :\n ");
    scanf("%d", &numero1);
    printf( "Ingrese otro numero: \n");
    scanf("%d", &numero2); 
    printf("Ingrese un ultimo numero: \n");
    scanf ("%d",&numero3); 

    if ( numero1 > numero2 && numero1 > numero3) {

        printf( "El numero mayor es: %d", numero1);

    } else if ( numero2 > numero1 && numero2 > numero3) {

        printf(" El numero mayor es: %d", numero2);

    } else if  (numero3 > numero1 && numero3 > numero2){

        printf (" El numero mayor es: %d", numero3);

    } else if (numero3 == numero1 && numero1 == numero2) {
    
        printf(" Sus numeros son iguales ");

    } 

 return 0;
}

