#include <stdio.h>
#include <stdlib.h>

int main() {

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("you are %d years old \n", age);


    char name[30];                              
    printf("What is your name: ");
    scanf("%s", name);                     /*Cant store strings which contain a space between them*/     
    printf("Your name is %s \n", name);

    char name[30];                              
    printf("What is your name: ");
    fgets(name, 30, stdin);                          /*Can store a string which contains a space between them*/
    printf("Your name is %s \n", name);


}