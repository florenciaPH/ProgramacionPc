#include <stdio.h>


int main(){

    printf("Buenos días, se mostrarán por pantalla los números pares entre 0 y 100 \n");
    for(int i = 0 ; i <= 100 ; i++){
        if(i % 2 == 0){
            printf("%d\n", i);

        }

    }


    return 0;
}
