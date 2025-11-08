/*
10) Scrivere un programma che legge un valore n e crea e visualizza la matrice identità di dimensione n.
*/

#include <stdio.h>

void matrix2d_SetToIdentity(int* m, int dim){
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            m[i*dim+j] = (i==j ? 1 : 0);
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

int main(){
    int dim;
    printf("Grandezza matrice identità: ");
    scanf("%d", &dim);
    int matrix[dim*dim];
    matrix2d_SetToIdentity(matrix, dim);
    matrix2d_Print(matrix, dim, dim);
    return 0;
}
