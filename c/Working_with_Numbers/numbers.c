#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("%f \n", 3.14);   /*Decimal print*/

    printf("%f \n", 1.5 + 4.0); /*Addititon with floats*/
    printf("%f \n", 50.1 - 10.6); /*Subtraction with floats*/
    printf("%f \n", 0.5 * 10); /*Multiplication with floats*/
    printf("%f \n", 100/5); /*Division with floats*/

    printf("%f \n", 10+1.5); /*Addition of float and decimal (still in float)*/
    printf("%f \n", 10-1.5); /*Subtraction of float and decimal (still in float)*/
    printf("%f \n", 10*1.5); /*Multiplication of float and decimal (still in float)*/
    printf("%f \n", 10/1.5); /*Division of float and decimal (still in float)*/

    printf("%d \n", 5 /4 ); /*Outputs an integer*/

    int n1 = 2;
    int n2 = 3;

    printf("%f \n", n1^n2); /*raises n1 to its n2th power.   i.e.  n1^n2*/

    printf("%f \n", sqrt(81));  /*Provides the square root of the given number*/

    printf("%f \n", ceil(55.37));  /* ceiling function, rounds off the the highest integer*/

    printf("%f \n", floor(3.77));  /*floor function, rounds off the the lowerst integer*/ 
}    
