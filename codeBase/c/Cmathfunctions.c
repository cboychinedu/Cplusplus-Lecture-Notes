// Including the header files 
#include <stdio.h> 
#include <math.h> 

/* 
* Important Note 
* when compiling use the following 
* $ gcc Cmathfunctions.c -lm -o a.out   
* The '-lm' -- flag is used to call the <math.h> header file. 
*/ 

// Running the main function 
int main() {
    // Declaring some variables of type double 
    double xValue, yValue, answer; 
    /* 
    * Implementing the following equation 
    * y = e ^ x 
    */  

   // Taking in the value for x from the user 
   printf("Type in xValue: "); 
   scanf("%lf", &xValue); 
   // Performing the operation 
   yValue = exp(xValue); 

   // Displaying the answer 
   printf("The value for yValue is: %.3lf \n", yValue); 

    // Closing the program 
    return 0; 
}