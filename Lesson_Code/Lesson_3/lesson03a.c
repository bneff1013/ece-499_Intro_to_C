// An example of implicit conversion 
#include<stdio.h> 
int main() 
{ 
    int x = 10;    // integer x 
    char y = 'a';  // character c 
  
    // y implicitly converted to int. ASCII  
    // value of 'a' is 97 
    x = x + y; 
     
    // x is implicitly converted to float 
    float z = x + 1.0; 
  
    printf("x = %d\nz = %f\n", x, z); 

    const float pi=3.14159;
    float user_pi=0;

    // C allows us to change how output is interpreted with format specifiers
    printf("pi is set to %.5f\n", pi);

    printf("Enter a value for pi to 3 decimal places:");
    scanf("%f",&user_pi);

    printf("If forced out to 5 decimal places, user defined pi is set to %.5f\n", user_pi);

    //Can you do the following statement?
    // pi = user_pi;

    //Force user_pi to be treated as an integer by explicitly casting
    printf("user_pi properly casted as an int : %d",(int)user_pi);
    printf("user_pi improperly handled as an int : %d",user_pi);

    return 0; 
} 