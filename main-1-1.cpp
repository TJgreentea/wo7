// main-1-1.cpp
#include "Appliance.h"
#include <iostream>

int main() {
    Appliance myAppliance;
    myAppliance.set_powerRating(100);

    std::cout << "Power Rating: " << myAppliance.get_powerRating() << std::endl;
    std::cout << "Is on: " << std::boolalpha << myAppliance.get_isOn() << std::endl;

    myAppliance.turnOn();
    std::cout << "Is on after turning on: " << myAppliance.get_isOn() << std::endl;

    myAppliance.turnOff();
    std::cout << "Is on after turning off: " << myAppliance.get_isOn() << std::endl;

    return 0;
}
