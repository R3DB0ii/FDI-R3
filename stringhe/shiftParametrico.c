#include <stdio.h>
#include <string.h>

void strShift(char* str){
    int len=strlen(str)-1;
    char temp=str[len];
    for(int i=len; i>0; i--){
        str[i]=str[i-1];
    } str[0]=temp;
}

void shiftParametrico(char* str, int i){
    while((i--)>0) strShift(str);
}

int main(){
    char str[50];
    fgets(str,50,stdin);
    int i=0;
    while(str[i]!='\n') i++;
    str[i]='\0';
    shiftParametrico(str, 3);
    printf("%s", str);
}
