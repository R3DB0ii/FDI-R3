#include <stdio.h>
#include <string.h>

int isUpper(char c){
    int ret=0;
    if(c>='A'&&c<='Z') ret=1;
    return ret;
}

void primaMaiuscole(char* str){
    int len=strlen(str);
    char temp[len];
    int k=0;
    for(int i=0; i<len; i++){
        if(isUpper(str[i])){
            temp[k++]=str[i];
        }
    }
    for(int i=0; i<len; i++){
        if(!isUpper(str[i])){
            temp[k++]=str[i];
        }
    }
    for(int i=0; i<len; i++){
        str[i]=temp[i];
    }
}

int main(){
    char str[50];
    fgets(str,50,stdin);
    int i=0;
    while(str[i]!='\n') i++;
    str[i]='\0';
    primaMaiuscole(str);
    printf("%s", str);
    return 0;
}
