#include <stdio.h>

int main(){

   long clave_correcta =21500232;
   long clave_usuario =0;

printf("bienvenido! Por favor ingrese su clave\n");
scanf("%lu", &clave_usuario);

if (clave_usuario == clave_correcta){
    printf("la clave es correcta, puede ingresar\n");}
 else { 
     printf("La clave es incorrecta, te quedan dos intento\n");
     printf("Por favor ingrese d enuevo su clave\n");
     scanf("%lu", &clave_usuario);
     if (clave_usuario== clave_correcta){
    printf("la clave es correcta, puede ingresar\n");}
 else { 
     printf("La clave es incorrecta, te queda un intento\n");
     printf("Por favor ingrese de nuevo su clave\n");
     scanf("%lu", &clave_usuario);
if (clave_usuario== clave_correcta){
    printf("la clave es correcta, puede ingresar\n");}
 else { 
     printf("La clave es incorrecta, ya no te quedan intentos\n");
     printf("Usuario bloqueado\n");
    
 }}



 return 0;
}
}


