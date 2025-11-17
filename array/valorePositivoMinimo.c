/*
Realizzare un programma che consiste di tre funzioni.

La funzione main legge una sequenza di interi introdotta dall'utente (prima di leggere tale sequenza chiede all'utente di quanti numeri consiste la sequenza). La funzione main invoca quindi la funzione esistePositivo che verifica se, fra gli interi della sequenza, ce n'è almeno uno positivo. Nel caso tale intero positivo non esista, viene stampato un messaggio che informa l'utente che non esiste nessun intero positivo. Nel caso tale intero positivo esista, viene invocata una funzione positivoMinimo che calcola e restituisce l'intero positivo più piccolo fra quelli della sequenza; la funzione main stampa quindi tale intero.

La funzione esistePositivo riceve come parametro un array di interi, la sua lunghezza e restituisce 1 se la sequenza contiene almeno un intero positivo, 0 altrimenti.

La funzione positivoMinimo riceve come parametro un array di interi, nel quale si assume sia presente almeno un intero positivo, la sua lunghezza e restituisce il valore del più piccolo intero positivo nella sequenza.
*/

#include <stdio.h>

int esistePositivo(int* arr, int dim){
    int ret=0;
    for(int i=0; i<dim; i++){
        if(arr[i]>=0) ret++;
    }
    return ret;
}

int positivoMinimo(int* arr, int dim){
    int min=arr[0];
    for(int i=0; i<dim-1; i++){
        if(arr[i]<arr[i+1]) min=arr[i+1];
    }
    return min;
}

int main() {
    int dim;
    printf("Lunghezza array: ");
    scanf("%d",&dim);
    int arr[dim];
    for(int i=0; i<dim; i++){
        scanf("%d",&arr[i]);
    }
    if(esistePositivo(arr, dim)){
        int min=positivoMinimo(arr, dim);
        printf("%d\n", min);
    }
    else printf("La sequanza non contiene valori positivi\n");
}
