/*
Realizzare un programma che consiste di due funzioni.

La funzione main legge una sequenza di interi introdotta dall'utente (prima di leggere tale sequenza chiede all'utente di quanti numeri consiste la sequenza) ed invoca la funzione valoriAssoluti che rimpiazza ciascun elemento dell'array con il suo valore assoluto. La nuova sequenza viene quindi stampata.

La funzione valoriAssoluti riceve come parametro un array di interi, la sua lunghezza e rimpiazza ciascun elemento dell'array con il suo valore assoluto.
*/

void valoriAssoluti(int* arr, int dim){
    for(int i=0; i<dim; i++){
        if(arr[i]<0) arr[i] = -arr[i];
    }
}

#include <stdio.h>

int main() {
    int dim;
    printf("Numero elementi dell'array: ");
    scanf("%d",&dim);
    int arr[dim];
    for(int i=0; i<dim; i++){
        scanf("%d",&arr[i]);
    }
    valoriAssoluti(arr, dim);
    for(int i=0; i<dim; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
