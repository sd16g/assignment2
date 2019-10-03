//
// Spencer Dennis
//

#include "Jet.h"

Jet::Jet() {
    numOfEngines = 1;
}

Jet::Jet(string brand, string model, string fuelType, int numsEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngines(numsEngines);
}

Jet::~Jet() = default;

int Jet::getEngines() {
    return numOfEngines;
}

void Jet::setEngines(int engines) {
    numOfEngines = engines;
}

double Jet::mileageEstimate(double t) {
    srand(time(0));
    double mileage = ((rand() % 60) + 40) * t;

    if(numOfEngines > 2 && fuelType == "Rocket"){
        mileage += mileage * (numOfEngines*0.05);
    }

    return mileage;
}

string Jet::toString() {
    return ("-> Jet\n" + PoweredVehicle::toString()) + "\n\tNumber of engines: " + to_string(numOfEngines);
}
