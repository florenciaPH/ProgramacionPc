#include <stdio.h>


int main (){
  int numero =0;
  int numero2 =0;
  int resultado =0;

printf("Bienvenidoa su calculador de sumas. Por favor ingrese un numero:\n");

scanf("%i", &numero);
// hacer lo mismo con el numero dos
printf(" Por favor ingrese otro numero:\n");
scanf("%i", &numero2);

// sumar
resultado = numero + numero2;
printf("El resultado de su suma es : %i\n", resultado);
return 0;
}

