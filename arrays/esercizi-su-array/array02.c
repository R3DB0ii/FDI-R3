/*
02) Scrivere un programma che legge una sequenza di interi introdotta dall'utente e 
crea e stampa la sequenza inversa di quella letta.
*/

#include <stdio.h>

int main() {
    int arr_dim;
    printf("Quanti numeri vuoi leggere: ");
    scanf("%d", &arr_dim);
    int arr[arr_dim];
    for(int i=0; i<arr_dim; i++){
        scanf("%d", &arr[i]);
    }
    for (int i=arr_dim-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
