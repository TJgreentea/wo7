#include "Appliance.h"
#include <iostream>

Appliance::Appliance() : powerRating(0), isOn(false) {}

Appliance::Appliance(int PowerRating) : powerRating(PowerRating), isOn(false) {}

int Appliance::get_powerRating() const {
    return powerRating;
}

void Appliance::set_powerRating(int powerRating) {
    this->powerRating = powerRating;
}

bool Appliance::get_isOn() const {
    return isOn;
}

void Appliance::turnOn() {
    isOn = true;
}

void Appliance::turnOff() {
    isOn = false;
}
Fridge::Fridge():Appliance(),volume(0){}
Fridge::Fridge(int powerRating, double volume):Appliance(powerRating), volume(volume) {}
void Fridge::setVolume(double volume) {
    this->volume = volume;
}

double Fridge::getVolume() const {
    return volume;
}
double Fridge::getPowerConsumption() const {
    // Implement the formula to calculate power consumption.
    return get_powerRating() * 24 * (volume / 100);
}
 TV::TV() : Appliance(), screenSize(0) {}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::getScreenSize() const {
    return screenSize;
}

double TV::getPowerConsumption() const {
    // Implement the formula to calculate power consumption for TV.
    return get_powerRating() * (screenSize / 10);
}

