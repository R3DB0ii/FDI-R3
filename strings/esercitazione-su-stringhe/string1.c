/*
Task 1: Una funzione primaLeAPoiLeZ riceve come parametro una stringa e la modifica riordinando i caratteri della stringa così che tutte le ‘a’ (minuscole) compaiono all’inizio della stringa e tutte le ‘z’ (minuscole) compaiono alla fine della stringa. Caratteri diversi da ‘a’ e ‘z’ possono apparire in un ordine qualsiasi (comunque dopo le ‘a’ e prima delle ‘z’). Ad esempio, se la stringa parametro è "az56Aazza8", allora "aaa56A8zzz" rappresenta una possibile modifica corretta della stringa.

Task 2: Una funzione main chiede all'utente di inserire una stringa da tastiera ed utilizzando la funzione fgets memorizza la stringa introdotta dall'utente all'interno di un array di 50 caratteri. Dopo aver rimosso il carattere '\n' dalla stringa, la funzione main invoca la funzione primaLeAPoiLeZ fornendole come parametro la stringa letta; la funzione main stampa quindi la stringa modificata.
*/

#include <stdio.h>
#include <string.h>

void primaLeAPoiLeZ(char* str){
    int len=strlen(str);
    int p=0;
    for(int i=0; i<len; i++){
        if(str[i]=='a'){
            if(i==0) p++;
            else{
                for(int j=i; j>p; j--){
                    str[j]=str[j-1];
                }
                str[p++]='a';
            }
        }
    }
    int k=0;
    for(int i=0; i<len; i++){
        if(str[i]!='z'){
            str[k++]=str[i];
        }
    }
    while(k<len) str[k++]='z';
}

int main(){
    char str[50];
    fgets(str,50,stdin);
    int i=0;
    while(str[i]!='\n') i++;
    str[i]='\0';
    primaLeAPoiLeZ(str);
    printf("%s", str);
}
