#include"Appliance.h"
appliance::appliance():powerRating(0),ison(false){}
appliance::appliance(int powerRating):powerRating(powerRating),ison(false){}
void appliance::turnon(){ison=true;}
void appliance::turnoff(){ison=false;}
int appliance::get_powerRating() const { return powerRating; }
// Getter method implementation to return the power rating

void appliance::set_powerRating(int rating) { powerRating = rating; }
// Setter method implementation to set a new power rating

bool appliance::get_ison() const { return ison; }
// Getter method implementation to check if the appliance is currently on

double appliance::getpowerconsumption() const{
    if (ison) {
        return powerRating; // Return the power rating if the appliance is on
    } else {
        return 0; // Return 0 if the appliance is off
    }
}
