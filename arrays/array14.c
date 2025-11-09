/*
14) Scrivere un programma che che legge un intero n introdotto dall'utente e crea 
 una matrice con n righe i cui elementi sono quelli del triangolo di Tartaglia 
dove non vengono stampati gli 0.
Esempio: per n=6 la matrice stampata in output è
1
1    1
1    2    1
1    3    3    1
1    4    6    4    1
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

void matrix2d_Print_Grid_noZero(int* m, int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int k=0; k<cols; k++) printf("+-------");
        printf("+\n");
        for(int j=0; j<cols; j++){
            if(m[i*cols+j]!=0) printf("| %d\t", m[i*cols+j]);
            else printf("|   \t");
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
    matrix2d_Print_Grid_noZero(matrix, rows, rows);
}
