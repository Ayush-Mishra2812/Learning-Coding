#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int age = 15;
    double marks = 98.7;
    char grade = 'A';

    int * P_AGE = &age;                 //pointer location for age variable
    double *P_MARKS = &marks;           //pointer location for marks variable
    char * P_GRADE = &grade;            //pointer location for grade variable


    printf("variable \"age's\" memory address is %p \n", &age);     //here &age is a pointer
                                                                    //pointer is the memory address of a variable
    

    return 0;
}