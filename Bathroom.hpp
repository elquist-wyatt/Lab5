//
//  Bathroom.hpp
//  Lab5
//
//  Created by Wyatt Elquist on 2/25/22.
//

#ifndef Bathroom_hpp
#define Bathroom_hpp

#include <iostream>
using namespace std;

class Bathroom {
    int numberSinks;
public:
    Bathroom() {
        numberSinks = 2;
    }
    Bathroom (int numberSinks): numberSinks(numberSinks){
    }
    
    int getnumberSinks();
    void setnumberSinks();
    
private:
};

#endif /* Bathroom_hpp */
