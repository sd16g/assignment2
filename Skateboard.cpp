//
// Spencer Dennis
//
#include "Skateboard.h"


Skateboard::Skateboard() {
    setFuelType("unknown");
}

Skateboard::Skateboard(string brand, string model, string fuelType) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
}

Skateboard::~Skateboard() = default;

string Skateboard::getFuelType() {
    return fuelType;
}

void Skateboard::setFuelType(string fuel) {
    fuelType = fuel;
}

double Skateboard::mileageEstimate(double t) {
    srand(time(0));
   	int temp = rand() % 400;
   	double mileage = temp/1000;
   	mileage += 0.1;
   	mileage *= t;
    
    int hold = floor(t/3);


    if(t > 25 && t < 250){
    	temp = (rand() % hold) + 1;
    	mileage += temp;
    }

    return mileage;
}

string Skateboard::toString() {
    return ("-> SkateBoard\n" + Vehicle::toString() + "\n\tFuelType: " + getFuelType());
}