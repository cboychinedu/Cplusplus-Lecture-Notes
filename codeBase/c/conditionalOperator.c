// Including the header files 
#include <stdlib.h> 
#include <stdio.h> 

// Running the main function 
int main(void) {
    // Creating the age variable 
    int age; 
    // Taking in user input 
    printf("Enter you age: "); 
    scanf("%d", &age); 
    // Performing the teenage conditional operator 
    age >= 13 && age <= 19? printf("Yes, a teenager \n"): printf("No, not a teenager \n"); 
    
    // Closing the program 
    return 0; 
}