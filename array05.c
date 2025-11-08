/*
05) Scrivere un programma che legge una sequenza di interi introdotta dall'utente, legge un indice
e crea una nuova sequenza che contiene tutti gli elementi della precedente, 
tranne quello con l'indice fornito dall'utente; la nuova sequenza viene stampata.
*/

#include <stdio.h>

void clean_buffer(void) {
    while (getchar() != '\n' && getchar() != EOF);
}

void vec_Populate(int *v, int size){
    for(int i=0; i<size; i++){
        scanf("%d", &v[i]);
    }
    clean_buffer();
}

void vec_CpWOElem(int* vin, int size, int index, int* vout){
    int k=0;
    for(int i=0; i<size; i++){
        if(i!=index){
            vout[k]=vin[i];
            k++;
        }
    }
}

void vec_Print(int* v, int size){
    for(int i=0; i<size; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int vec_dim, index;
    printf("Grandezza vettore: ");
    scanf("%d", &vec_dim);
    clean_buffer();
    printf("Valori: ");
    int vec[vec_dim];
    vec_Populate(vec, vec_dim);
    printf("Indice da eliminare (si parte dall'indice 0): ");
    scanf("%d", &index);
    clean_buffer();
    int new[vec_dim-1];
    vec_CpWOElem(vec, vec_dim, index, new);
    vec_Print(new, vec_dim-1);
    return 0;
}
