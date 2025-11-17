/*
01) Scrivere un programma che legge una sequenza di interi introdotta dall'utente
e crea una nuova sequenza che contiene tutti gli elementi positivi
della precedente; la nuova sequenza viene stampata.
Utilizzare una funzione che riceve come parametro un array di interi e 
conta il numero di interi positivi nell'array.
*/

#include <stdio.h>

int main() {
    int arr_dim;
    printf("Quanti numeri vuoi inserire: ");
    scanf("%d", &arr_dim);
    int arr[arr_dim];
    for(int i=0; i<arr_dim; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<arr_dim; i++) {
        if(arr[i] >= 0) printf("%d ", arr[i]);
    }
    return 0;
}
