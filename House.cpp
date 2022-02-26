//
//  House.cpp
//  Lab5
//
//  Created by Wyatt Elquist on 2/25/22.
//
#include "Building.hpp"
#include "House.hpp"
#include <iostream>
using namespace std;

int House::getNumberBedrooms(){
    return numberBedrooms;
}
bool House::getGarage(){
    return garage;
}
int House::getMaxOccupancy(){
    return maxOccupancy;
}

void House::printAttributes(){
    cout << "Building" << endl;;
    Building::buildingtoString();
    cout << boolalpha;
    cout << "Number of Bedrooms: " << numberBedrooms <<endl;
    cout << "Has Garage: " << garage << endl;
    cout << "Max Occupancy: " << maxOccupancy << endl;
    cout << "Sinks in bathroom: " << bathroom.getnumberSinks() << endl;
}
