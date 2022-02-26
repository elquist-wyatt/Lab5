//
//  Building.hpp
//  Lab5
//
//  Created by Wyatt Elquist on 2/25/22.
//

#ifndef Building_hpp
#define Building_hpp

#include <iostream>

using namespace std;

class Building {
    int squareFootage;
    int numberStories;
public:
    Building() {
        squareFootage = 10;
        numberStories = 2;
    }
    Building (int squareFootage, int numberStories): squareFootage(squareFootage),numberStories(numberStories) {
        }
    
    int getsquareFootage();
    
    int getnumberStories();
    
    void setsquareFootag(int squareFootage);
    
    void setnumberStories(int numberStories);
protected:
    string buildingtoString();
private:
    
};

#endif /* Building_hpp */
