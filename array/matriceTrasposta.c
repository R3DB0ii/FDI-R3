/*
Realizzare un programma che legge una matrice M di interi introdotta dall'utente (prima di leggere gli elementi di tale matrice chiede all'utente il numero di righe ed il numero di colonne della matrice). Il programma crea quindi la matrice trasposta M^T della matrice M, ovvero la matrice ottenuta da M scambiando le righe con le colonne. Il programma stampa quindi la matrice M^T e stampa inoltre un messaggio che indica se la matrice M è simmetrica (ovvero se è uguale alla sua matrice trasposta).

Oltre alla funzione main, si possono definire a piacimento funzioni, ad esempio per il calcolo della matrice trasposta, per la stampa di una matrice, per la verifica se due matrici sono uguali...
*/

#include <stdio.h>

int main() {
    int rows,cols;
    printf("Inserire righe matrice: ");
    scanf("%d",&rows);
    printf("Inserire colonne matrice: ");
    scanf("%d",&cols);
    int mat[rows][cols];
    // Riempio matrice
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    // Creo e stampo trasposta
    int trasp[cols][rows];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            trasp[j][i]=mat[i][j];
        }
    }
    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            printf("%d ",trasp[i][j]);
        }
        printf("\n");
    }
    if(rows==cols){
        int flag=0;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(trasp[i][j]!=mat[i][j]) flag++;
            }
        }
        if(flag!=0) printf("Le matrici non sono simmetriche\n");
        else printf("Le matrici sono simmetriche\n");
    }
    else printf("Le matrici non sono simmetriche\n");
    return 0;
}
