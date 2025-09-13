// Including the header files
#include <iostream>
#include <string>

// Creating a constant for acceleration due to gravity
const double GRAVITY = 9.81;

// Creating the first function for calculating a given force
double calculate_force(double mass)
{
    // Creating variables for the result of the calcuated force
    double force;

    // Displaying an info message
    std::cout << "[INFO]: Calculating the force." << std::endl;

    // Calcuating the force
    force = mass * GRAVITY;

    // Returning the result
    return force;

}

// Creating a function for calculating the mass of a body given
// The force
double calculate_mass(double force)
{
    // Creating variables for the result of the calculated mass
    double mass;

    // Displaying an info message
    std::cout << "[INFO]: Calculating the mass." << std::endl;

    // Calculating the mass
    mass = force / GRAVITY;

    // Returning the result for the calcuated mass
    return mass;

}

// Creating a function for calculating the gravity of a body given the
// mass and force
double calculate_gravity(double mass, double force)
{
    // Creating variables for the result of the calcuated gravity
    double gravity;

    // Displaying an info message
    std::cout << "[INFO]: Calclating the gravity: " << std::endl;

    // Calcuating the gravtiy
    gravity = force / mass;

    // Returning the result for the calculated gravity
    return gravity;

}
