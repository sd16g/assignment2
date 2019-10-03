//
// Spencer Dennis
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {
protected :
    string fuelType;

public:
    Skateboard();
	Skateboard(string brand, string model, string fuelType);

    virtual ~Skateboard();
    virtual string toString();
    virtual double mileageEstimate(double time);

    string getFuelType();

    void setFuelType(string fuel);
};


#endif //DRIVINGSIMULATOR_POWEREDVEHICLE_H
