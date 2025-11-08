/*
03) Scrivere un programma che legge due vettori e ne calcola il prodotto scalare.
*/
#include <stdio.h>

/* Questa funzione mi serve solo ad evitare che l'utente utilizzi in modo improprio il programma.
 * Può essere rimossa (insieme alle sue chiamate), e il programma funzionerebbe, tuttavia avrebbe
 * meno controlli sull'input dell'utente dando ad esso il compito di usare il programma correttamente.*/
void clean_buffer(void) {
    while (getchar() != '\n' && getchar() != EOF);
}

void vec_Populate(int *v, int size){
    for(int i=0; i<size; i++){
        scanf("%d", &v[i]);
    }
    clean_buffer();
}

int vec_ScalarProd(int* v1, int* v2, int size){
    int res=0;
    for(int i=0; i<size; i++){
        res += v1[i]*v2[i];
    }
    return res;
}

int main() {
    int vec_dim;
    printf("Grandezza vettori: ");
    scanf("%d", &vec_dim);
    clean_buffer();
    printf("Primo vettore: ");
    int vec1[vec_dim];
    vec_Populate(vec1, vec_dim);
    printf("Secondo vettore: ");
    int vec2[vec_dim];
    vec_Populate(vec2, vec_dim);
    printf("Prodotto scalare tra v1 e v2: %d", vec_ScalarProd(vec1, vec2, vec_dim));
    return 0;
}
