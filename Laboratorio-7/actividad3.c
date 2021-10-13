#include <stdio.h>

int numero;
int resultado=0;


int main(){
    printf("Bienvenidos a su calculador de dividores. Por favor ingrese un número\n");
    scanf("%d",&numero);
    printf("Los divisores de este número son\n");

    for (int i = 1; i < numero; i++)
    {
        resultado=(numero%i);
        if(resultado!=0){
            continue;
        }

        printf("%d\n",i);
    }

 return 0;    
}
