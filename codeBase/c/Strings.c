// Including the header files 
#include <stdio.h> 
#include <stdlib.h> 

// Running the main C-function 
int main(void) {
    // Creating a variable to hold the name and 
    // Creating another variable to hold the user age  
    char characterName[] = "Tom"; 
    int characterAge = 67; 

    // Displaying  
    printf("There once was a man named %s \n", characterName); 
    printf("He was %d years old. \n", characterAge); 

    // Changing the character age 
    characterAge = 30; 
    
    printf("He really liked the name %s \n", characterName); 
    printf("But did not like being %d \n", characterAge); 

    // Closing up 
    return 0; 

}