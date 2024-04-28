// main-2-2.cpp
#include "Appliance.h"
#include <iostream>

int main() {
    TV myTV(150, 55); // Creating a TV with a power rating of 150 and screen size of 55 inches.
    
    std::cout << "TV Screen Size: " << myTV.getScreenSize() << " inches" << std::endl;
    std::cout << "TV Power Consumption: " << myTV.getPowerConsumption() << " kWh" << std::endl;

    return 0;
}
