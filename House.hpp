//
//  House.hpp
//  Lab5
//
//  Created by Wyatt Elquist on 2/25/22.
//

#ifndef House_hpp
#define House_hpp
#include "Bathroom.hpp"
#include "Building.hpp"
#include <iostream>
using namespace std;

class House: public Building{
    int numberBedrooms;
    bool garage;
    int maxOccupancy;
    
    Bathroom bathroom;
public:
    
    House() {
        numberBedrooms = 4;
        garage = true;
        maxOccupancy = 3;
    }
    
    House(int numberBedrooms, bool garage, int maxOccupancy){
        numberBedrooms = numberBedrooms;
        garage = garage;
        maxOccupancy = maxOccupancy;
    }
    
    House (int squareFootage, int numberStories, Bathroom bathroom, int numberBedrooms, bool garage, int maxOccupancy):Building(squareFootage, numberStories), bathroom(bathroom), numberBedrooms(numberBedrooms), garage(garage), maxOccupancy(maxOccupancy){

    }
    
    int getNumberBedrooms();
    bool getGarage();
    int getMaxOccupancy();
    
    void printAttributes();
    
private:
    
};

#endif /* House_hpp */
