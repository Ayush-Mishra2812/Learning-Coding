#include <stdio.h>

int comparison(int num1, int num2);

int main() {
    int num1, num2, result;
    printf("Write any two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = comparison(num1, num2);
    printf("%d is the bigger number\n", result);
    return 0;
}

int comparison(int num1, int num2) {
    if (num1 > num2) {                      //contiton
        return num1;                        // outcome if the condition it true
    } else {
        return num2;                        // outcome is the condition is false
    }
}
