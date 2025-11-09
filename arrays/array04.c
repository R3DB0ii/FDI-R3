/*
04) Scrivere un programma che legge una sequenza di interi introdotta dall'utente 
e stampa un messaggio che indica se tale sequenza è crescente oppure no.
Utilizzare una funzione che riceve come parametro un array di interi e restituisce 
1 oppure 0 se la sequenza è crescente oppure no.
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

int vec_isOrdered(int* v, int vec_dim) {
    int ret=0;
    int prev=v[0];
    for(int i=0; i<vec_dim; i++){
        if(v[i]>=prev) ret++;
        prev=v[i];
    }
    return ret==vec_dim;
}

int main() {
    int vec_dim;
    printf("Grandezza vettore: ");
    scanf("%d", &vec_dim);
    clean_buffer();
    printf("Valori: ");
    int vec[vec_dim];
    vec_Populate(vec, vec_dim);
    printf((vec_isOrdered(vec, vec_dim) ? "Il vettore ha valori crescenti\n" : "Il vettore NON ha valori crescenti\n"));
    return 0;
}
