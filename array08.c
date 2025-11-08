/*
08) Scrivere un programma che legge una sequenza di interi introdotta dall'utente
e stampa un messaggio che indica qual è l'elemento che appare più di frequente.
Utilizzare due funzioni: una che riceve come parametro un array di interi, un valore intero e 
conta il numero di occorrenze dell'intero nell'array. Un'altra che riceve come parametro un array 
di interi e restituisce l'indice del valore dell'array che ha occorrenza massima.
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

int vec_ValFreq(int* v, int size, int val){
    int count=0;
    for(int i=0; i<size; i++){
        if(v[i]==val) count++;
    }
    return count;
}

int vec_HighestValIndex(int* v, int size){
    int index=0;
    for(int i=0; i<size; i++){
        if(v[i]>=v[index]) index=i;
    }
    return index;
}

int vec_MostFreqIndex(int* v, int size){
    int vals[size];
    for(int i=0; i<size; i++){
        vals[i] = vec_ValFreq(v, size, v[i]);
    }
    for(int i=0; i<size; i++) printf("%d\n", vals[i]);
    return vec_HighestValIndex(vals, size);
}

int main() {
    int vec_dim, val;
    printf("Grandezza vettore: ");
    scanf("%d", &vec_dim);
    clean_buffer();
    printf("Valori: ");
    int vec[vec_dim];
    vec_Populate(vec, vec_dim);
    printf("Indice del valore più frequente nel vettore: %d\n",vec_MostFreqIndex(vec, vec_dim) + 1);
}
