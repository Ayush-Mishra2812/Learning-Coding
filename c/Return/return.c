#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int num;

int cube(int num);

int main(){
    printf("What is the number that you want to get cubed: ");
    scanf("%d", &num);
    printf("Answer: %d \n", cube(num));
    return 0;
}

int cube(int num){
    int result =  num*num*num;
    return result;                  //gives the output as the vairable "result" when called
}