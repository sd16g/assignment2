//
// Spencer Dennis
//

#include "CargoShip.h"

CargoShip::CargoShip() {
    cargoType = "unknown";
    setBrand("unknown");
    setModel("unknown");
}

CargoShip::CargoShip(string brand, string model, string fuelType, string typeOfCargo) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setCargoType(typeOfCargo);
}

CargoShip::~CargoShip() = default;

string CargoShip::getCargoType() {
    return cargoType;
}

void CargoShip::setCargoType(string typeOfCargo) {
    cargoType = typeOfCargo;
}

double CargoShip::mileageEstimate(double time) {
    double mileage = ((rand() % 45) + 1) * time;
    if (getCargoType() == "cars") {
        mileage -= mileage * 0.2;
    }
    return mileage;
}

string CargoShip::toString() {
    return "-> CargoShip\n" + PoweredVehicle::toString() + "\n\tCargo Type: " +
           getCargoType();
}