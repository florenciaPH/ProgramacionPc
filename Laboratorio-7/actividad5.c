#include <stdio.h>

int suma;
int numero;


int main() {
 printf("Buenos días. Este es su calculador de sumas. Se dejará de sumar cuandso ingrese un número negativo. Por favor ingrese un número \n");
 while(numero>=0){
 printf("Ingrese otro numero\n");
 scanf("%d", &numero);
 suma=suma+numero;
 }

 printf("El resultado final es: %d \n",suma);

return 0;

}
