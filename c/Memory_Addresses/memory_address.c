#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 15;
    float pi = 3.14;

    printf("pi: %p \n", &pi);           //tells us the memory address where the variable pi is stored
    printf("age: %p \n", &age);          //tells us the memory address where the variable age is stored

}