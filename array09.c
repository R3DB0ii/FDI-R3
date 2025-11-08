/*
09) Scrivere un programma che legge i valori di un array bidimensionale di elementi di tipo int e lo visualizza in forma matriciale, assumendo che i numeri introdotti abbiano
al massimo 3 cifre.
*/

#include <stdio.h>

void clean_buffer(void) {
    while (getchar() != '\n' && getchar() != EOF);
}

void matrix2d_Populate(int *m, int rows, int cols){
    for(int i=0; i<rows; i++){
        printf("Riga %d di %d: ", i+1, rows);
        for(int j=0; j<cols; j++){
            scanf("%d", &m[i*cols+j]);
        }
        clean_buffer();
    }
}

void matrix2d_Print(int* m, int rows, int cols){
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
    int rows, cols;
    printf("Righe matrice: ");
    scanf("%d", &rows);
    clean_buffer();
    printf("Colonne matrice: ");
    scanf("%d", &cols);
    clean_buffer();
    int matrix[rows*cols];
    matrix2d_Populate(matrix, rows, cols);
    matrix2d_Print(matrix, rows, cols);
}
