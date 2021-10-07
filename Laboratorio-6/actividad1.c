  
#include <stdio.h>
#include <math.h>

int numero = 0;
int divisor = 0;

int main(){
    printf("Hola! veremos si tu número es par o impar. Por favor ingrese un número\n");
    scanf("%d", &numero);
    divisor = numero%2;


    if(divisor == 0){
        printf("su número es par\n");

    }
    else{
        printf("su número es impar\n");


    }
 
return 0;
}