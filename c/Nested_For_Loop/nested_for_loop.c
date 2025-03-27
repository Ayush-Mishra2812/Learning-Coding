#include <stdio.h>
#include <stdlib.h>

int main(){

    int nums[4][2] = {{1,2},{3,4},{5,6},{7,8}};     //2D arrays 
    int i,j;

    for(i = 0; i <4 ; i++){             //i = 0, then j 0 & 1,     i = 1, then j 0 & 1 .........
        for(j = 0; j < 2; j++){
            printf("%d, ",nums[i][j]);      //printed coordinates
        }
        printf("\n");
    }
}