/*
06) Scrivere un programma che legge una sequenza di interi introdotta dall'utente, legge un intero
e crea una nuova sequenza che contiene tutti gli elementi della precedente, 
tranne quelli con valore pari all'intero letto; la nuova sequenza viene stampata. 
Utilizzare una funzione che riceve come parametro un array di interi, un valore intero e 
conta il numero di occorrenze dell'intero nell'array.
*/


#include <stdio.h>

void clean_buffer(void) {
    while (getchar() != '\n' && getchar() != EOF);
}

void populate_vector(int *v, int size){
    for(int i=0; i<size; i++){
        scanf("%d", &v[i]);
    }
    clean_buffer();
}

void cpVecWOVal(int* vin, int size, int val, int* vout){
    int k=0;
    for(int i=0; i<size; i++){
        if(vin[i]!=val){
            vout[k]=vin[i];
            k++;
        }
    }
}

int vecValsEqualTo(int* v, int size, int val){
    int k=0;
    for(int i=0; i<size; i++){
        if(v[i]==val) k++;
    }
    return k;
}

void vecPrint(int* v, int size){
    for(int i=0; i<size; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int vec_dim, val;
    printf("Grandezza vettore: ");
    scanf("%d", &vec_dim);
    clean_buffer();
    printf("Valori: ");
    int vec[vec_dim];
    populate_vector(vec, vec_dim);
    printf("Valore da eliminare: ");
    scanf("%d", &val);
    clean_buffer();
    int occurencies = vecValsEqualTo(vec, vec_dim, val);
    int new_dim = vec_dim - occurencies;
    int new[new_dim];
    cpVecWOVal(vec, vec_dim, val, new);
    vecPrint(new, new_dim);
    printf("Valore %d eliminato %d volta/e\n", val, occurencies);
    return 0;
}
