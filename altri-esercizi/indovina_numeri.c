#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num = (rand() % 100) + 1;
    int count=0, end=0, guess;
    printf("Ho pensato ad un numero tra 1 e 100\nIndovina che numero ho pensato!\n");
    printf("Ricorda che puoi digitare 0 per smettere di giocare\n");
    do {
        count++;
        printf("Indovina che numero ho pensato: ");
        scanf("%d", &guess);
        if(guess == num) {
            end=1;
            printf("Hai indovinato facendo %d tentativi!\n", count);
        } else if (guess == 0) {
            end=1;
            printf("Ciao ciao\n");
        } else if (guess < num) {
            printf("%d è troppo basso\n", guess);
        } else {
            printf("%d è troppo alto\n", guess);
        }
    } while (!end);
    return 0;
}
