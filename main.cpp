//
//  main.cpp
//  Lab5
//
//  Created by Wyatt Elquist on 2/25/22.
//
#include "House.hpp"
#include "Building.hpp"
#include <iostream>

int main() {
    Bathroom bathroom(2);
    
    House house(2000,2,bathroom, 3, true, 6);
    house.printAttributes();
    
    
    return 0;
}
