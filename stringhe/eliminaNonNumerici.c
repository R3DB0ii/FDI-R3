#include <stdio.h>
#include <string.h>

void eliminaNonNumerici(char* str){
    int len=strlen(str);
    char temp[len];
    int k=0;
    for(int i=0; i<len; i++){
        if(!(str[i]>='0'&&str[i]<='9')){
            temp[k++]=str[i];
        }
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
    eliminaNonNumerici(str);
    printf("%s\n", str);
    return 0;
}
