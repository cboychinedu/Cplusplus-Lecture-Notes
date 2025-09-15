// Including the header files 
#include <iostream> 
#include <string> 

// Using namespaces 
using namespace std; 

// Creating a class 
class UserProperties {
    // Create the public method access specifier 
    public:
        // Declaring some important variables 
        string firstname; 
        string lastname; 
        string continent; 
        string country; 
        string state; 
        string streetAddress; 
        string longitude; 
        string latitude;  
        double age;

        // Declaring some variables for calculations 
        double x_axis; 
        double y_axis; 

        // Creating a method for the public access specifier 
        void displayCoordinates (string name, string latitude, string longitude) {
            // This function would add both the longitude and latitude, 
            // and return the result as a double type
            // just for fun purposes ( Not really applicable in real world situations )
            cout << name << " co-ordinates \n"; 
            cout << "Latitude: " << latitude << endl; 
            cout << "Longitude: " << longitude << endl; 
        }

        // Creating another method for using the declared variables 
        double addAxis(double x_axis, double y_axis) {
            // Execute this block of code if the function "addAxis" was called 
            x_axis = x_axis; 
            y_axis = y_axis; 

            // Return the result 
            return x_axis * y_axis; 
        }
        
}; 

// Running the main function 
int main() {
    // Creating an instance of the class "UserProperties" 
    UserProperties KelvinProp; 
    UserProperties SarahProp; 

    // Adding information for kelvin 
    KelvinProp.firstname = "Kuth"; 
    KelvinProp.lastname = "Kelvin"; 
    KelvinProp.continent = "Africa"; 
    KelvinProp.country = "Nigeria"; 
    KelvinProp.state = "Abuja"; 
    KelvinProp.streetAddress = "Mutima"; 
    KelvinProp.longitude = ".09853"; 
    KelvinProp.latitude = "24.9543"; 
    KelvinProp.age = 23; 

    // Adding information for sarah 
    SarahProp.firstname = "Rice"; 
    SarahProp.lastname = "Sarah"; 
    SarahProp.continent = "Europe"; 
    SarahProp.country = "Spain"; 
    SarahProp.state = "Paris"; 
    SarahProp.streetAddress = "Not specified!"; 
    SarahProp.longitude = "30.987"; 
    SarahProp.latitude = "24.567"; 
    SarahProp.age = 35; 

    // Display the attributes for the created instances of the the class "UserProperties"; 
    cout << "Fullnames: " << SarahProp.firstname << " " << SarahProp.lastname << endl; 
    cout << "Fullnames: " << KelvinProp.firstname << " " << KelvinProp.lastname << endl; 

    // Calling the function for displaying the co-ordinates for "Sarah" 
    SarahProp.displayCoordinates(SarahProp.firstname, SarahProp.latitude, SarahProp.longitude); 

    // Calling the addAxis for saraProp 
    double result = SarahProp.addAxis(0.987, 0.23); 

    // Display the result 
    cout << "Result for the added axis: " << result << endl; 
    

    // Closing the program 
    return 0; 
}