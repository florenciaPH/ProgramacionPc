#include <stdio.h>
char c;
int main() {
  
  printf("Bienvenido a su conversor ACII)\n");
  printf("Ingrese el caracter que necesita converir\n");
  scanf("%c",&c);
  printf("El valor de tu caracter %c en ACII es: %d", c, c);
  return 0;
}