#include <stdio.h>
#include <stdlib.h>

int main(){
    int index = 5;
    while(index <= 10){                      //while index is lower than or equal to 10, print the value of index
        printf("%d \n", index);
        index++;                            // adding one in the variable "index"
    }                                       // if index > 5, then nothing will get printed

    printf ("now, we are going to do the same thing but in a do-while loop, where is condition is not satisfied \n");

    do{
        printf("%d \n", index);
        index++;
    }while(index <= 5);

    return 0;
}
