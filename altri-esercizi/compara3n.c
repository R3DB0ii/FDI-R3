#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int d=x,u=x;
    if(y<d) d=y;
    if(z<d) d=z;
    if(y>u) u=y;
    if(z>u) u=z;
    printf("%d %d",d,u);
}
