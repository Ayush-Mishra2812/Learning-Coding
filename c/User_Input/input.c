#include <stdio.h>
#include <stdlib.h>

int main() {

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old \n", age);

    getchar(); 

    char name1[20];                              
    printf("What is your name: ");
    fgets(name1, 20, stdin);
    printf("Your name is %s", name1);

    return 0;

//fgets can store a string which has words seperated by a comma, while scaf cant do that
}
