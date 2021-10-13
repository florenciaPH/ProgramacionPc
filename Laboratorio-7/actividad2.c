#include<stdio.h>

int  numero1;
int  numero2;
int  resultado=0;
int i=0;

int main (){

    printf("Buenos días, este es su multiplicador de números. Ingrese dos números\n");

    scanf("%d", &numero1);
    
    scanf("%d", &numero2);

    for(int i=0; i<numero2; i++){

    resultado=resultado+numero1;


    }
    printf("El resultado de tu multiplicación es %d\n",resultado);

    return 0;
}
