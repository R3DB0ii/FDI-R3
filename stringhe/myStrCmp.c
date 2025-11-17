#include <stdio.h>

int myStrLen(char* str){
    int ret=0;
    while(str[ret++]!='\0');
    return ret-1;
}

int myStrCmp(char* str1, char* str2){
    int len1=myStrLen(str1);
    int len2=myStrLen(str2);
    int ret=0;
    if(len1==len2){
        for(int i=0; i<=len1; i++){
            if(str1[i]==str2[i]);
            else{
                if(str1[i]-str2[i]<0) ret=-1;
                if(str1[i]-str2[i]>0) ret=1;
            }
        }
    }
    else{
        if(len1<len2){
            for(int i=0; i<=len1; i++){
                if(str1[i]-str2[i]<0) ret=1;
                if(str1[i]-str2[i]>0) ret=-1;
            }
        } else {
            for(int i=0; i<=len2; i++){
                if(str1[i]-str2[i]<0) ret=1;
                if(str1[i]-str2[i]>0) ret=-1;
            }
        }
    }
    return ret;
}

int main(){
    char str1[50], str2[50];
    fgets(str1,50,stdin);
    fgets(str2,50,stdin);
    int i=0;
    while(str1[i]!='\n') i++;
    str1[i]='\0';
    i=0;
    while(str2[i]!='\n') i++;
    str2[i]='\0';
    printf("%d\n", myStrCmp(str1, str2));
}
