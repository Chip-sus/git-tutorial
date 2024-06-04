#include <stdio.h>

int main() {
    int myInteger = 5;        // Declares an integer variable and initializes it to 5
    float myFloat = 3.14;     // Declares a float variable and initializes it to 3.14
    char myChar = 'A';        // Declares a char variable and initializes it to 'A'
    double myDouble = 9.81;   // Declares a double variable and initializes it to 9.81

    // Printing the values of the variables
    printf("Integer: %d\n", myInteger);        // %d is used to print int
    printf("Float: %.2f\n", myFloat);          // %.2f is used to print float with 2 decimal places
    printf("Char: %c\n", myChar);              // %c is used to print char
    printf("Double: %.2lf\n", myDouble);       // %.2lf is used to print double with 2 decimal places

    return 0;
}
