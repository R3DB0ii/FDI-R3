/*
11) Scrivere un programma che legge le dimensioni di una matrice legge due interi r e c introdotti dall'utente 
e crea una matrice r * c che contiene tutti i numeri  naturali da 1 fino a r * c, in ordine crescente 
da 1 a c sulla prima riga, poi da c+1 a 2c sulla seconda riga, etc. 
Esempio: per r=2 e c=8 il programma stampa
 1   2   3   4   5   6   7   8
 9  10  11  12  13  14  15  16
 */


#include <stdio.h>

void clean_buffer(void) {
    while (getchar() != '\n' && getchar() != EOF);
}

void matrix2d_FillConsecNum(int *m, int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            m[i*cols+j]=i*cols+j+1;
        }
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
    matrix2d_FillConsecNum(matrix, rows, cols);
    matrix2d_Print(matrix, rows, cols);
}
