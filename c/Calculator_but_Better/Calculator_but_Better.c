#include <stdio.h>
#include <stdlib.h>

double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);

int main() {
    double num1, num2;
    char op;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    double result;
    
    if(op == '+'){
        result = add(num1, num2);
    }else if(op == '-'){
        result = subtract(num1, num2);
    }else if(op == '*'){
        result = multiply(num1, num2);
    }else if(op == '/'){
        if(num2 == 0){
            printf("Error! Division by zero is not allowed.\n");
            return 1;
        }
        result = divide(num1, num2);
    }else{
        printf("Invalid operator!\n");
        return 1;
    }
    
    // Printing result
    printf("Result: %.2lf\n", result);
    return 0;
}

// Function definitions
double add(double a, double b){
    return a + b;
}

double subtract(double a, double b){
    return a - b;
}

double multiply(double a, double b){
    return a * b;
}

double divide(double a, double b){
    return a / b;
}
