#include <stdio.h>
#include <stdlib.h>

int main(){
    char grade;
    printf("What is your grade: ");
    scanf(" %c", &grade);

    switch(grade){                      //used to compare the value of the vairable "grade"
        case 'A':
            printf("Excellent, you did a great job! \n");
            break;
        case 'B':
            printf("Good job, you got good marks \n");
            break;
        case 'C':
            printf("You did alright, but you could do better \n");
            break;
        case 'D':
            printf("Your marks were not satisfactory, improve on them \n");
            break;
        case 'F':
            printf("YOU FAILED HAAHAHAHAHAAHAH \n");
            break;
        default :                       //If the input is not in any of the given cases
            printf("Invalid Grade \n");
        }
}