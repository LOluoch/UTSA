#include <stdio.h>

int main() {
    printf("Hello World");
    int age =25;
    printf("\nAge:%d", age); //format specifier
    age = 31;
    printf("\nNew age:%d", age);
    // Assigning Variables
    int firstNumber = 33;
    printf("\nfirstNumber = %d", firstNumber);
    
    int secondNumber = firstNumber;
    printf("\nsecondNumber = %d", secondNumber);
    
    // Declare multiple variables at once
    int var1, var2 = 25;
    printf("\n%d", var1);
    printf("\n%d", var2);
    
    return 0;
}
