#include <iostream>
#include "Appliance.h" // Include the header file for the appliance class

int main() {
    // Create an instance of the appliance class using the default constructor
    appliance myAppliance;
    
    // Display the initial state and power rating of the appliance
    std::cout << "Initial appliance state: " << (myAppliance.get_ison() ? "On" : "Off") << "\n";
    std::cout << "Initial power rating: " << myAppliance.get_powerRating() << " watts\n";

    // Set the power rating to 1500 watts and display the change
    myAppliance.set_powerRating(1500);
    std::cout << "Power rating set to: " << myAppliance.get_powerRating() << " watts\n";

    // Turn the appliance on and display the state
    myAppliance.turnon();
    std::cout << "Appliance state: " << (myAppliance.get_ison() ? "On" : "Off") << "\n";

    // Display the power consumption
    std::cout << "Power consumption: " << myAppliance.getpowerconsumption() << " watts\n";

    // Turn the appliance off and display the state
    myAppliance.turnoff();
    std::cout << "Appliance state: " << (myAppliance.get_ison() ? "On" : "Off") << "\n";

    return 0; // End of program
}
