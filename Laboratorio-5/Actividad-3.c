#include <stdio.h>

int main() {

float numero1= 0;
float numero2= 0;
float resultado=0;

printf("Bienvenido a su caclulador de numeros decimales. Por favor ingrese su primer numero decimal. ej x,x :\n");
scanf("%f", &numero1);

printf(" Por favor ingrese su segundo numero decimal. ej y,y: \n");

scanf("%f", & numero2);

printf("Se calculara la multiplicacion entre los dos numeros anteriormente ingresados");

resultado= (numero1 * numero2); 

printf(" El resultado de su multiplicacion es: %f", resultado);

  return 0;
}