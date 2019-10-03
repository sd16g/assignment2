//
// Spencer Dennis
//

#ifndef DRIVINGSIMULATOR_CARGOSHIP_H
#define DRIVINGSIMULATOR_CARGOSHIP_H

#include "PoweredVehicle.h"

class CargoShip : public PoweredVehicle {

private:
    string cargoType;

public:
    CargoShip();

    explicit CargoShip(string brand, string model, string fuelType,
                 string typeOfCargo);

    virtual ~CargoShip();
    string getCargoType();
    void setCargoType(string typeOfCargo);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_CARGOSHIP_H
