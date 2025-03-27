#include <stdio.h>
#include <stdlib.h>

int main(){
    int luckyNumbers[] = {3,5,7,22,4,6};
    int i;
    for(i = 0; i < 6; i++){
    //  start: stop:   step
        printf("%d \n", luckyNumbers[i]);           // printing all the elements in the array
    }
    
    return 0;
}