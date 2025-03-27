#include <stdio.h>
#include <stdlib.h>

int main(){
    int age = 15;
    int *P_age = &age;          //assigning the location coordinate of the variable age to P_age

    printf("%d \n", *P_age);       // here the "*" is used to de-reference the P_age variable, i.e. find the variable that is stored in the location
}