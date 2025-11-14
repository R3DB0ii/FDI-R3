#include <stdio.h>
#include <string.h>

void occorrenzeConsecutive(char* str){
    int len=strlen(str);
    int same=0;
    char maxChar=str[0];
    int maxSame=0;
    for(int i=0; i<len; i++){
        if(str[i]==str[i+1]){
            same++;
        }
        else{
            if(same>maxSame){
                maxChar=str[i];
                maxSame=same;
                same=0;
            }
        }
    }
    printf("Il carattere con piu occorrenze è '%c', con %d occorrenze\n", maxChar, maxSame);
}

int main(){
    char str[50];
    fgets(str, 50, stdin);
    int i = 0;
    while(str[i]!='\n') i++;
    str[i]='\0';
    occorrenzeConsecutive(str);
}
