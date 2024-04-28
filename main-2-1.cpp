// main-2-1.cpp
#include "Appliance.h"
#include <iostream>

int main() {
    Fridge myFridge(100, 250); // Creating a Fridge with a power rating of 100 and volume of 250 litres.
    
    std::cout << "Fridge Power Consumption: " << myFridge.getPowerConsumption() << " kWh/day" << std::endl;

    return 0;
}
