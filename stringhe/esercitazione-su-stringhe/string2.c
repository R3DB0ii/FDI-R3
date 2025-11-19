/*
Task 1: Una funzione numeriNascosti riceve come parametro una stringa e la modifica rimpiazzando ogni sequenza di caratteri numerici con esattamente un carattere ‘*’. Ad esempio, se la stringa ricevuta come parametro è "per l'esame del 22/11/2024 ci sono 85 studenti prenotati per 1 canale", la stringa deve essere modificata in "per l'esame del *//*/* ci sono * studenti prenotati per * canale".

Task 2: Una funzione main chiede all'utente di inserire una stringa da tastiera ed utilizzando la funzione fgets memorizza la stringa introdotta dall'utente all'interno di un array di 50 caratteri. Dopo aver rimosso il carattere '\n' dalla stringa, la funzione main invoca la funzione numeriNascosti fornendole come parametro la stringa letta; la funzione main stampa quindi la stringa modificata.
*/

#include <stdio.h>
#include <string.h>

void numeriNascosti(char* s){
    int prev=0;
    int len=strlen(s);
    for(int i=0; i<len; i++){
        if(s[i]>='0'&&s[i]<='9'){
            if(prev!=1){
                s[i]='*';
                prev=1;
            } else {
                for(int j=i; j<len; j++){
                    s[j]=s[j+1];
                }
                len--;
                i--;
            }
        } else prev=0;
    }
}

int main(){
    char str[50];
    fgets(str,50,stdin);
    int i=0;
    while(str[i]!='\n') i++;
    str[i]='\0';
    numeriNascosti(str);
    printf("%s\n", str);
}
