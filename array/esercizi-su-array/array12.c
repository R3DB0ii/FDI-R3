/*
12) Scrivere un programma che legge le dimensioni e i valori di due matrici di elementi di tipo int e 
 calcola e visualizza la matrice prodotto.
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

void matrix2d_Mult(int* m1, int* m2, int m, int n, int p, int* m3){
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            m3[p*i+j] = 0;
            for(int k=0; k<n; k++){
                m3[p*i+j] += m1[n*i+k] * m2[p*k+j];
            }
        }
    }
}

int main() {
    int m, n, p;
/*
 *  matrix_A(m * n)  Matrici da moltiplicare
 *  matrix_B(n * p)
 *
 * */
    printf("Righe prima matrice: ");
    scanf("%d", &m);
    clean_buffer();
    printf("Colonne prima matrice: ");
    scanf("%d", &n);
    clean_buffer();
    int matrix_A[m*n];
    matrix2d_Populate(matrix_A, m, n);

    printf("Colonne seconda matrice: ");
    scanf("%d", &p);
    clean_buffer();
    int matrix_B[n*p];
    matrix2d_Populate(matrix_B, n, p);

    int matrix_C[m*p];
    matrix2d_Mult(matrix_A, matrix_B, m, n, p, matrix_C);
    matrix2d_Print_Grid(matrix_C, m, p);
}










