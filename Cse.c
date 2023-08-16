
#include <stdio.h>

// Function to perform addition
float addition(float a, float b) {
    return a + b;
}

// Function to perform subtraction
float subtraction(float a, float b) {
    return a - b;
}

// Function to perform multiplication
float multiplication(float a, float b) {
    return a * b;
}

// Function to perform division
float division(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}
int main ()
{   int a,b;
scanf("%d %d", &a,&b);
int add =  a+b;
printf("Addition number between a and b : = %d\n", add);
int sub =  a-b;
printf("subtraction number between a and b : = %d\n", sub);
int mul =  a*b;
printf("multiplication number between a and b : = %d\n", mul);
int div =  a/b;
printf("division number between a and b : = %d\n", div);
}
