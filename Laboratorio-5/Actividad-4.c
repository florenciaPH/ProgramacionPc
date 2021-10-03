#include <stdio.h>

#define pi 3.14

int main (){

int radio= 0;
float perimetro=0;
float area=0;

printf( "Bienvenidoa a su calculador de area y perimetro. Por favor ingrese el radio de su circunferencia:\n");
scanf("%i", &radio);
printf("Se caluclará el area  y el perimetro de su cincunferencia");

area = (radio * radio) * pi;
perimetro = (2*pi*radio);

printf(" El area de su circunferencia es: %f" , area);
printf( " y el perimetro de su circunferencia es: %f", perimetro);
return 0; 
}