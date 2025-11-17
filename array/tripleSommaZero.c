/*
Realizzare un programma che consiste di due funzioni.

La funzione main legge una sequenza di interi introdotta dall'utente (prima di leggere tale sequenza chiede all'utente di quanti numeri consiste la sequenza). La funzione main invoca quindi la funzione tripleSommaZero che calcola e restituisce il numero di triple di interi consecutivi nella sequenza la cui somma è pari a 0; la funzione main stampa quindi tale intero.

La funzione tripleSommaZero riceve come parametro un array di interi e la sua lunghezza e restituisce il numero di triple di interi consecutivi nella sequenza la cui somma è pari a 0.
*/

#include <stdio.h>

int tripleSommaZero(int* arr, int dim){
    int tsz=0;
    for(int i=0; i<dim-2; i++){
        if(arr[i]+arr[i+1]+arr[i+2]==0) tsz++;
    }
    return tsz;
}

int main() {
    int dim;
    printf("Lunghezza array: ");
    scanf("%d",&dim);
    int arr[dim];
    for(int i=0; i<dim; i++){
        scanf("%d",&arr[i]);
    }
    int tsz = tripleSommaZero(arr, dim);
    printf("%d",tsz);
    return 0;
}
