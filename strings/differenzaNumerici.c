#include <stdio.h>
#include <string.h>

int abs(int x){
    int ret;
    if(x>=0) ret=x;
    else ret=-x;
    return ret;
}

int differenzaNumerici(char* str){
    int len = strlen(str);
    int ret,k=0;
    int arr[len];
    for(int i=0; i<len; i++) arr[i]=0;
    for(int i=0; i<len; i++){
        if(str[i]>='0' && str[i]<='9') arr[k++]=i;
    }
    if(k<2) ret=-1;
    else{
        int maxDiff = abs((str[arr[0]]-'0')-(str[arr[1]]-'0'));
        int diff=0;
        for(int i=0; i<k-1; i++){
            diff=abs((str[arr[i]]-'0')-str[arr[i+1]]-'0')
            if(diff>maxDiff) maxDiff=diff;
        }
        ret=maxDiff;
    }
    return ret;
}

int main(){
    char str[50];
    fgets(str,50,stdin);
    int i=0;
    while(str[i++]!='\n');
    str[i]='\0';
    printf("%d\n", differenzaNumerici(str));
    return 0;
}
