#include <stdio.h>

int main() {
    // Declare a char variable
    char myChar = 'A';

    // Print the char value
    printf("Character: %c\n", myChar);  // %c format specifier

    // Print the ASCII value of the char
    printf("ASCII value: %d\n", myChar);  // %d format specifier to print integer

    // Change the char value
    myChar = 'B';
    printf("New Character: %c\n", myChar);
    printf("New ASCII value: %d\n", myChar);

    // Using char as part of a string
    char myString[] = "Hello, World!";
    printf("String: %s\n", myString);  // %s format specifier for strings

    return 0;
}
