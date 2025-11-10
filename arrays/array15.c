/*

15) Scrivere un programma che che legge un intero n introdotto dall'utente e crea 
 una matrice con n righe i cui elementi sono quelli del triangolo di Tartaglia.
Gli elementi del triangolo di Tartaglia devono essere visualizzati come un triangolo isoscele.
Esempio: per n=6 il triangolo deve risultare
               1
            1     1
         1     2     1
      1     3     3     1
   1     4     6     4     1
1     5     10    10    5     1  
*/

#include <stdio.h>

void clean_buffer(void) {
    while (getchar() != '\n' && getchar() != EOF);
}

void matrix2d_Fill_Tartaglia(int *m, int rows){
    m[0]=1;
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            if(i*rows+j!=0) m[i*rows+j]=0;
            if(i>0){
                if(j==0) m[i*rows]=1;
                else m[i*rows+j]=m[(i-1)*rows+j]+m[(i-1)*rows+j-1];
            }
        }
    }
}

void matrix2d_Print_asPyramid_up(int* m, int rows) {
    int base=(rows*2)-1;
    for(int i=0; i<rows; i++) {
        int k=0;
        for(int p=0; p<rows-i; p++) printf(" ");
        for(int j=0; j<=base; j++) {
            if((j+1>=rows-i && j<=rows+i)){
                if(i%2==0 && j%2!=0) printf((m[i*rows+k]>9) ? (m[i*rows+k+1])>99 ? "%d " : "%d  " : "%d   ", m[i*rows+k++]);
                else if(i%2!=0 && j%2==0) printf((m[i*rows+k]>9) ? (m[i*rows+k+1])>99 ? "%d " : "%d  " : "%d   ", m[i*rows+k++]);
            } else printf(" ");
        }
        if(i<(rows-1)) printf("\n");
    }
}

/*void matrix2d_Print_asPyramid_up(int* m, int rows){
    int base=2*rows-1;
    for(int i=0; i<rows; i++){
        int k=0;
        for(int j=0; j<base; j++){
            if(j+1==rows && i%2==0 && i!=0) printf("%d", m[i*rows+i-(i/2)]);
            else if(j+1==rows && i%2==0) printf("%d", m[i*rows]);
            else if(rows%2==0 && i%2!=0 && j%2==0 && ((j-rows)%2==0) && ((j-rows)/2 >=-i && (j-rows)/2 < i-1)){
                printf("%d", m[i*rows+k]);
                k++;
            }
            else if(rows%2!=0 && i%2!=0 && j%2!=0 && ((j-rows)%2==0) && ((j-rows)/2 >=-i && (j-rows)/2 < i-1)){
                printf("%d", m[i*rows+k]);
                k++;
            }
            else if(rows%2==0 && i%2==0 && j%2!=0 && ((j-rows+1)%2==0 && (j-rows+1)/2>=-i && (j-rows+1)/2<=i)){
                printf("%d", m[i*rows+k]);
                k++;
            }
            else printf(" ");
        }
        printf("\n");
    }
}
*/
int main() {
    int rows;
    printf("Righe matrice: ");
    scanf("%d", &rows);
    clean_buffer();
    int matrix[rows*rows];
    matrix2d_Fill_Tartaglia(matrix, rows);
    matrix2d_Print_asPyramid_up(matrix, rows);
}
