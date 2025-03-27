#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student{             //creating a template for storing data of any student
    char name[30];
    int class;
    int age;
};

int main(){

    struct student Student1;
        Student1.class =11;                     //storing data in the structs
        Student1.age =15;
        strcpy(Student1.name, "Ayush Mishra");

    printf("The student's name is %s \n", Student1.name);
    printf("The student's age is %d \n", Student1.age);
    printf("The student's class is %d \n", Student1.class);     //Printing the data
    return 0;
}