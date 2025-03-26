#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num = 4;
    const int num1 = 5;

    printf("%d, %d \n", num, num1);
    num  = 33;
     /*int num1 = 21;*/                         /*Wont work as its a constant and cant be changed*/
}