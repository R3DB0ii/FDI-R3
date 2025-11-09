/*
13) Scrivere un programma che che legge un intero n introdotto dall'utente e crea 
 una matrice con n righe i cui elementi sotto alla diagonale principale (compresa) 
sono quelli del triangolo di Tartaglia.
Esempio: per n=6 la matrice stampata in output è
1    0    0    0    0    0
1    1    0    0    0    0
1    2    1    0    0    0
1    3    3    1    0    0
1    4    6    4    1    0
1    5    10   10   5    1
*/

#include <stdio.h>

void clean_buffer(void) {
    while (getchar() != '\n' && getchar() != EOF);
}

void matrix2d_Fill_Tartaglia(int *m, int rows){
    m[0]=1;
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            if(i*rows+j!=0) m[i*rows+j]=0;
            if(i>0){
                if(j==0){
                    m[i*rows]=1;
                } else {
                    m[i*rows+j]=m[(i-1)*rows+j]+m[(i-1)*rows+j-1];
                }
            }
        }
    }
}

void matrix2d_Print_Grid(int* m, int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int k=0; k<cols; k++) printf("+-------");
        printf("+\n");
        for(int j=0; j<cols; j++){
            printf("| %d\t", m[i*cols+j]);
        }
        printf("|\n");
    }
    for(int k=0; k<cols; k++) printf("+-------");
    printf("+\n");
}

int main() {
    int rows;
    printf("Righe matrice: ");
    scanf("%d", &rows);
    clean_buffer();
    int matrix[rows*rows];
    matrix2d_Fill_Tartaglia(matrix, rows);
    matrix2d_Print_Grid(matrix, rows, rows);
}
