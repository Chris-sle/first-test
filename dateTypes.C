#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'A'; // single character %c
    char b[] = "Hello"; // string (array of characters) %s

    float c = 3.14f; // 4 bytes (32 bits of precision) 6-7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15-16 digits %lf

    bool e = true; // 1 byte boolean value %d (1 for true, 0 for false)

    char f = 100; // 1 byte (-128 to 127) %d or %c
    unsigned char g = 200; // 1 byte (0 to 255) %d or %c

    short int h = 30000; // 2 bytes (-32768 to 32767) %d
    unsigned short int i = 60000; // 2 bytes (0 to 65535) %d

    int j = 2000000000; // 4 bytes (-2147483648 to 2147483647) %d
    unsigned int k = 4000000000U; // 4 bytes (0 to 4294967295) %u

    long long int l = 9000000000000000000LL; // 8 bytes (-9223372036854775808 to 9223372036854775807) %lld
    unsigned long long int m = 18000000000000000000ULL; // 8 bytes (0 to 18446744073709551615) %llu

    
    // format specifier % = defines and formats the type of data to be displayed
    // %c = character
    // %s = string
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %.2f = float with 2 decimal places
    // %.15lf = double with 15 decimal places
    // %1 = minimum field width
    // %- = left justify

    // Printing the values and their sizes
    printf("Character a: %c\n", a); // char
    printf("Size of char: %zu bytes\n", sizeof(a)); // size of char
    printf("String b: %s\n", b); // string
    printf("Size of string: %zu bytes\n", sizeof(b)); // size of string (array of characters)
    printf("Float c: %.2f\n", c); // float
    printf("Size of float: %zu bytes\n", sizeof(c)); // size of float
    printf("Double d: %.15lf\n", d); // double
    printf("Size of double: %zu bytes\n", sizeof(d)); // size of double
    printf("Boolean e: %d\n", e); // boolean
    printf("Size of boolean: %zu bytes\n", sizeof(e)); // size of boolean
    printf("Character f: %d (or %c)\n", f, f); // char as int and char
    printf("Size of char (f): %zu bytes\n", sizeof(f)); // size of char
    printf("Unsigned char g: %d (or %c)\n", g, g); // unsigned char as int and char
    printf("Size of unsigned char (g): %zu bytes\n", sizeof(g)); // size of unsigned char
    printf("Short int h: %d\n", h); // short int
    printf("Size of short int (h): %zu bytes\n", sizeof(h)); // size of short int
    printf("Unsigned short int i: %d\n", i); // unsigned short int
    printf("Size of unsigned short int (i): %zu bytes\n", sizeof(i)); // size of unsigned short int
    printf("Integer j: %d\n", j); // int
    printf("Size of int (j): %zu bytes\n", sizeof(j)); // size of int
    printf("Unsigned integer k: %u\n", k); // unsigned int
    printf("Size of unsigned int (k): %zu bytes\n", sizeof(k)); // size of unsigned int
    printf("Long long int l: %lld\n", l); // long long int
    printf("Size of long long int (l): %zu bytes\n", sizeof(l)); // size of long long int
    printf("Unsigned long long int m: %llu\n", m); // unsigned long long int
    printf("Size of unsigned long long int (m): %zu bytes\n", sizeof(m)); // size of unsigned long long int
}