/*
07) Scrivere un programma che legge una sequenza di interi introdotta dall'utente 
e stampa un messaggio che indica se tale sequenza contiene due numeri uguali oppure no.
Utilizzare una funzione che riceve come parametro un array di interi e restituisce  1 oppure 0 
se la sequenza contiene due numeri uguali oppure no.
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

int vec_hasDupVals(int* v, int size) {
    int flag=0;
    for (int i=0; i<size-1; i++) {
        for (int j=i+1; j<size; j++) {
            if (v[i]==v[j]) flag=1;
        }
    }
    return flag;
}

int main() {
    int vec_dim, val;
    printf("Grandezza vettore: ");
    scanf("%d", &vec_dim);
    clean_buffer();
    printf("Valori: ");
    int vec[vec_dim];
    vec_Populate(vec, vec_dim);
    printf(vec_hasDupVals(vec, vec_dim) ? "Il vettore contiene più componenti uguali" : "Il vettore NON ha componenti uguali tra loro");
}
