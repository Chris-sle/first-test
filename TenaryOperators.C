#include <stdio.h>

int main () {
    // Tenary Operators Example
    int a = 10, b = 20;
    int max = (a > b) ? a : b; // Using ternary operator to find the maximum of two numbers
    printf("The maximum of %d and %d is: %d\n", a, b, max);
    
    // Using ternary operator to check if a number is even or odd
    int number = 15;
    const char *result = (number % 2 == 0) ? "even" : "odd";
    printf("The number %d is %s.\n", number, result);

    // Using ternary operator to assign a value based on a condition
    int age = 18;
    const char *status = (age >= 18) ? "Adult" : "Minor";
    printf("The person is an %s.\n", status);

    // Using ternary operator to determine a grade based on marks
    int marks = 85;
    char grade = (marks >= 90) ? 'A' : (marks >= 75) ? 'B' : (marks >= 50) ? 'C' : 'D';
    printf("The grade for marks %d is: %c\n", marks, grade);

    // Using ternary operator to check if a number is positive, negative, or zero
    int num = -5;
    const char *numStatus = (num > 0) ? "positive" : (num < 0) ? "negative" : "zero";
    printf("The number %d is %s.\n", num, numStatus);

    // Using ternary operator to determine if a year is a leap year
    int year = 2020;
    const char *leapYearStatus = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? "Leap Year" : "Not a Leap Year";
    printf("The year %d is a %s.\n", year, leapYearStatus);

    // Using ternary operator to check if a character is uppercase or lowercase
    char ch = 'G';
    const char *caseStatus = (ch >= 'A' && ch <= 'Z') ? "uppercase" : (ch >= 'a' && ch <= 'z') ? "lowercase" : "not an alphabet";
    printf("The character '%c' is %s.\n", ch, caseStatus);

    // Using ternary operator to determine if a number is divisible by another number
    int num1 = 10, num2 = 3;
    const char *divisibilityStatus = (num1 % num2 == 0) ? "divisible" : "not divisible";
    printf("The number %d is %s by %d.\n", num1, divisibilityStatus, num2);

    return 0;
}
