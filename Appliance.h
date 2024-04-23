#ifndef APPLIANCE_H
#define APPLIANCE_H

class appliance{
    private: int powerRating;
             bool ison;
    public: 
    appliance();
    appliance(int poweRating);
    void turnon();
    void turnoff();
    virtual double getpowerconsumption() const;
    int get_powerRating() const;
    void set_powerRating(int rating);
    bool get_ison()const;
    void set_ison(bool on);
    };
    #endif
