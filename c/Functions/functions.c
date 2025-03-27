#include <stdio.h>
#include <stdlib.h>


void sayHi(int); // Function declaration

int main(){

    sayHi(20); // function calling
    return 0;
}

// function definition
void sayHi(int num){
    for(int i=0; i <num; i++) {
        printf("Saying Hi %d time\n", i+1);
    }
}