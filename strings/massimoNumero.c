#include <stdio.h>
#include <string.h>

int massimoNumero(const char* s) {
    int max = -1;
    int current = -1;

    for(int i=0; i<strlen(s); i++) {
        if(s[i]>='0'&&s[i]<='9') {
            if(current==-1) current=0;
            current=current*10+(s[i]-'0');
        } else {
            if(current!=-1) {
                if(current>max) max=current;
                current=-1;
            }
        }
    }
    // Caso in cui la stringa termina con un numero
    if(current!=-1&&current>max) {
        max=current;
    }
    return max;
}

int main(){
    char str[50];
    fgets(str,50,stdin);
    int i=0;
    while(str[i++]!='\n');
    str[i]='\0';
    printf("%d\n", massimoNumero(str));
}
