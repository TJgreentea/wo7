#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
private:
    int powerRating;
    bool isOn;

public:
    Appliance();
    Appliance(int powerRating);
    virtual ~Appliance() {} // It's good practice to have a virtual destructor in a base class

    int get_powerRating() const;
    void set_powerRating(int powerRating);
    bool get_isOn() const;
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption() const = 0; // Making it pure virtual if there's no default implementation
};

class Fridge : public Appliance {
private:
    double volume; // Corrected typo here

public:
    Fridge();
    Fridge(int powerRating, double volume);
    virtual ~Fridge() {}

    void setVolume(double volume);
    double getVolume() const;
    double getPowerConsumption() const override; // Added const to match Appliance class
};
class TV : public Appliance{
     private:
     double screenSize;
     public:
     TV();
     TV(int powerRating,double screenSize);
     virtual ~TV(){}
    void serScreenSize(double screenSize);
    double getScreenSize() const;
    double gerPowerConsumption()const override;


};
#endif // APPLIANCE_H

