#include <stdio.h>

int main(void){
    //declare and initialize an integer named 'a' to have the value 104
    int a = 104;
    //print the value of a to the terminal using formatted output forcing 5 digits to be printed
    printf("Value of 'a' padded is: %05d\n", a);

    //declare and initialize a floating point variable with the value 1.234567
    float val= 1.234567;
    //print the value of 'val' to the terminal using formatted output such that only 2 decimal points
    //are used
    printf("val = %.2f\n", val);

    //Use the formatted string output to display various strings to the screen
    printf("str1=\"%20s\", str2=\"%-20s\"\n","Hello", "World");

    return(1);
}