#include <stdio.h>
#include <stdio.h>

int main(){

    int secretnumber = 7;
    int guess;
    int tries = 0;

    while( guess != secretnumber){
        tries++;
        printf("Enter the number that you guess is going to be correct: ");
        scanf("%d", &guess);
    }
    printf("You guessed the number, it took you %d tries \n", tries);
    return 0;
}