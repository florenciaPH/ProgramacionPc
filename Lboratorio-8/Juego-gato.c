#include <stdio.h>
#include <stddef.h>


char Tablero [3][3];
int Fila;
int Columna;
int Ganador = 0;
int Juegos = 0;




int main(){

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            Tablero [i][j] = '-';
        }
    }

    printf("%c  |  %c  |  %c\n", Tablero [0][0], Tablero [0][1], Tablero [0][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", Tablero [1][0], Tablero [1][1], Tablero [1][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", Tablero [2][0], Tablero [2][1], Tablero [2][2]);

    while(!Ganador && Juegos < 9){

        if(Juegos%2 == 0){
            printf("Jugador X -> Ingrese su ficha en forma Columna,Fila:\n");
            scanf("%d,%d", &Columna,&Fila);

            while (Tablero  [Columna - 0][Fila - 0] != '-')
            {
                printf("Esta jugada ya está hecha, por favor ingrese una diferente \n");
                scanf("%d,%d", &Columna, &Fila);
            }

            Tablero [Columna - 0][Fila - 0] = 'X'; 
        } else {
            printf("Jugador O -> Ingrese su ficha en forma Columna,Fila:\n");
            scanf("%d,%d", &Columna, &Fila);

            while (Tablero [Columna - 0][Fila - 0] != '-')
            {
                printf("Esta jugada ya está hecha, por favor ingrese una diferente\n");
                scanf("%d,%d", &Columna, &Fila);
            }

            Tablero [Columna - 0][Fila - 0] = 'O'; 
        }
printf("%c  |  %c  |  %c\n", Tablero [0][0], Tablero [0][1], Tablero [0][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", Tablero [1][0], Tablero [1][1], Tablero [1][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", Tablero [2][0], Tablero [2][1], Tablero [2][2]);

        
        if((Tablero [2][0] == Tablero [2][1]) && (Tablero [2][1] == Tablero [2][2]) && (Tablero [2][0] != '-')){
            printf("Eres el ganador!");
            Ganador = 1;
        }
        if((Tablero [1][0] == Tablero [1][1]) && (Tablero [1][1] == Tablero [1][2]) && (Tablero [1][0] != '-')){
            printf("Eres el ganador!");
            Ganador = 1;
        }
        if((Tablero [0][0] == Tablero [0][1]) && (Tablero [0][1] == Tablero [0][2]) && (Tablero [0][0] != '-')){
            printf("Eres el ganador!");
            Ganador = 1;
        }

        
        if((Tablero [0][0] == Tablero [1][0]) && (Tablero [1][0] == Tablero [2][0]) && (Tablero [0][0] != '-')){
            printf("Eres el ganador!");
            Ganador = 1;
        }
        if((Tablero [0][1] == Tablero [1][1]) && (Tablero [1][1] == Tablero [2][1]) && (Tablero [0][1] != '-')){
            printf("Eres el ganador!");
            Ganador = 1;
        }
       if((Tablero [0][2] == Tablero [1][2]) && (Tablero [1][2] == Tablero [2][2]) && (Tablero [0][2] != '-')){
            printf("Eres el ganador!");
            Ganador = 1;
        }

        //diagonales
        if((Tablero [0][0] == Tablero [1][1]) && (Tablero [1][1] == Tablero [2][2]) && (Tablero [0][0] != '-')){
            printf("Eres el ganador!");
            Ganador = 1;
        }
        if((Tablero [0][2] == Tablero [1][1]) && (Tablero [1][1] == Tablero [2][0]) && (Tablero [0][2] != '-')){
            printf("Eres el ganador!");
            Ganador = 1;
        }


        Juegos++;
    }

    return 0; 
}