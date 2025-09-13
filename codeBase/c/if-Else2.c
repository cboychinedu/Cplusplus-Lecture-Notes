// Including the header files 
#include <stdlib.h> 
#include <stdio.h> 

// Running the main function 
int main(void) {
    // Declaring some variables to hold the age of the person 
    int Age; 
    // Taking in the age value as an int 
    printf("Type your age: "); 
    scanf("%d", &Age); 
    // Setting some if / else statement condition 
    // If block 
    if (Age >= 13 && Age <=20)
    {
        printf("you are a tennager. \n"); 
        printf("Study well okay. \n"); 
    }
    // Else block 
    else
    {
        printf("you are not a tennager. \n"); 
    }
    // Closing up 
    return 0; 
}