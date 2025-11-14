#include <stdio.h>
#include <string.h>

int doppiaStringa(char* str){
    int len=strlen(str)-1;
    int ret=0, flag=0;
    if(len%2!=0) ret=0;
    else{
        for(int i=0; i<len/2; i++){
            if(str[i]==str[i+(len/2)]) flag++;
        }
    }
    if(flag==len/2) ret=1;
    return ret;
}

int main(){
    char str[50];
    fgets(str,50,stdin);
    int i=0;
    while(str[i++]!='\n');
    str[i]='\0';
    printf("%d\n", doppiaStringa(str));
}
