/** lesson02c.c
* ===========================================================
* Name: Col Brian J. Neff
* Section: Summer 2020 ECE 499
* Project: Lesson 2
* Purpose: Learn Variables, Arithmetic Expressions,
* Order of Operations, and Console I/O
* ===========================================================
*/

// Reads the contents of the header file stdio.h
// Standard I/O functions for console and files (printf, scanf)
#include <stdio.h>

// Below is a function prototype
// In c something has to be declared or specified prior to use
void printBits(size_t const size, void const *const ptr);

//int main(void){
int main() {
    // Variable declarations, must be done prior to use

    // This is a declared, but uninitialized variable
     int n;

    //Variable is initialized via an assignment operator
     n = 3;

    // Can also initialize at declaration
    int x = 27;
    int y = 0;

    //Can declare/initialize multiple variables at once
    //  int a, b, c=0, d=4;

    // C allows us to change how output is interpreted with format specifiers
    printf("x = %d\n", x);
    printf("x = %f\n", x);
    printf("x = %x\n", x);
    printf("x = %o\n", x);
    printf("x = ");

    // There isn't a way to print in binary in the standard c library
    // so we wrote a helper function to accomplish this
    printBits(sizeof(x), &x);

    // IO from the console / keyboard
    printf("Enter y:");
    scanf("%d",&y);

    // Arithmetic expressions
    int sum = x + y;
    printf("The sum of x+y is = %d\n", sum);

    //Order of operations
    int z = x+3*x/(y-4);
    printf("The value of the expression z=x+3*x/(y-4) = %d\n", z);

    // Semicolon ends statement, not a newline
    x += y, x-= y, x *= y, x /= y,
            x %= y;
    printf("The value of x = %d\n", x);

    // Print a newline
    printf("\n");

    return 0;
}

void printBits(size_t const size, void const *const ptr) {
    unsigned char *b = (unsigned char *) ptr;
    unsigned char byte;
    int i, j;

    for (i = size - 1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}