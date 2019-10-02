//
// Created by Esteban Parra on 9/5/19.
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int numOfEngines;

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 int numsEngines);

    virtual ~Jet();
    int getEngines();
    void setEngines(int engines);
    virtual double mileageEstimate(double t);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
