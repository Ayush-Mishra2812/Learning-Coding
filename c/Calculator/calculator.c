#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1;
    double num2;
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ", &num2);
    scanf("%lf", &num2);

    printf("The sum of the numbers is: %lf \n", num1 + num2);

    return 0;

}