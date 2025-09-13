// Including the header files 
#include <stdio.h> 
#include <stdlib.h> 

// Running the main function
int main(void) {
    // Declaring some variables 
    int i, age, True = 1; 
    char response; 
    
    // Creating a do loop firstly 
    do 
        {   
            // Taking in the user input 
            printf("Enter age: "); 
            scanf("%d", &age); 

            // Setting the if block 
            if (age >= 13 && age <= 19) 
                {
                    printf("You are still a teenager. \n"); 
                }
            else 
                {
                    printf("Yeah yh, you are not a teenager. \n"); 
                }
            // 
            printf("Do you want ot continue? (y/n): "); 
            scanf(" %c", &response); 
        }
    while (True) 
    {
        // Taking in the user input 
        printf("Enter age: "); 
        scanf("%d", &age); 

        // Setting the if block 
        if (age >= 13 && age <= 19)
        {
            printf("You are still a teenager. \n"); 
            
        }
        // Else block 
        else 
            printf("Yeah yh, you are not a teenager. \n"); 

        // Asking question for countinuation 
        printf("Do you still want to run the program (y/n)?: "); 
        scanf(" %c", response); 

        // Making a condition based on the response 
        // if block for Yes condition 
        if (response == 'y' || response == 'Y')
            {
                // Assigning the value for true to be 1 
                True = 1; 
            }
        // Else if block for No condition 
        else
            {
                // Assigning the value for true to be 0 
                True = 0; 
            }
    }

    // Displaying the final input 
    printf("You age is %d, and you are a teenager. \n", age); 

    // Closing the program 
    return 0; 

}