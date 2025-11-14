/*
Task 1: Una funzione cancellaDueNumericiUguali riceve come parametro una stringa e la modifica rimuovendo ogni sequenza di esattamente due caratteri numerici uguali consecutivi. Ad esempio, se la stringa ricevuta come parametro è "22cde555ee12a13367bb5", la stringa deve essere modificata in "cde555ee12a167bb5".

Task 2: Una funzione main chiede all'utente di inserire una stringa da tastiera ed utilizzando la funzione fgets memorizza la stringa introdotta dall'utente all'interno di un array di 50 caratteri. Dopo aver rimosso il carattere '\n' dalla stringa, la funzione main invoca la funzione cancellaDueNumericiUguali fornendole come parametro la stringa letta; la funzione main stampa quindi la stringa modificata.
*/

#include <stdio.h>
#include <string.h>

void cancellaDueNumericiUguali(char* str){
    int len=strlen(str);
    char temp[len];
    int k=0;
    for(int i=0; i<len; i++){
        if(str[i]>='0'&&str[i]<='9'&&i<len-1){
            if(i==0&&str[i]==str[i+1]&&str[i]!=str[i+2]);
            else if(i==1&&str[i]==str[i-1]&&str[i]!=str[i+1]);
            else if(i==len-1&&str[i]==str[i+1]&&str[i]!=str[i-1]);
            else if((str[i]==str[i+1]&&str[i]!=str[i+2]&&str[i]!=str[i-1])||(str[i]==str[i-1]&&str[i]!=str[i-2]&&str[i]!=str[i+1]));
            else temp[k++]=str[i];
        } else temp[k++]=str[i];
    }
    for(int i=0; i<k; i++){
        str[i]=temp[i];
    }
    str[k]='\0';
}


int main(){
    char str[50];
    fgets(str,50,stdin);
    int i=0;
    while(str[i]!='\n') i++;
    str[i]='\0';
    cancellaDueNumericiUguali(str);
    printf("%s\n", str);
}
