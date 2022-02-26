//
//  Building.cpp
//  Lab5
//
//  Created by Wyatt Elquist on 2/25/22.
//

#include "Building.hpp"
#include "Bathroom.hpp"
#include <iostream>
#include <sstream>

using namespace std;

string Building::buildingtoString(){
    
    stringstream ss;
    ss << "Square Footage: " << getsquareFootage() << endl << "Number of Stories: " << getnumberStories() << endl;
    string build = ss.str();
    cout << build;
    return build;
}

int Building::getsquareFootage(){
    return squareFootage;
}

int Building::getnumberStories(){
    return numberStories;
}

void Building::setsquareFootag(int squareFootage){
    squareFootage = squareFootage;
}

void Building::setnumberStories(int numberStories){
    numberStories = numberStories;
}
