#include <string>
#include <iostream>
#include <ostream>
#include "Subdivision.h"
using namespace std;
#include "House.h"
Subdivision::Subdivision(){}                               // default constructor
Subdivision::Subdivision(std::string subName, int size){
     size1=0;
     name1="";
}  // constructor with given subdivision size and 
                                             // subdivision name

// returns the number of houses currently built on the the subdivision
int Subdivision::get_num_houses(){
         return size1;
}

string Subdivision::get_subdiv_name(){
    return name1;
} // returns the subdivision's name
House * get_houses(){
    House*  lift;
}          // returns the array of houses currently on the subdivision

// returns true and adds new house to the subdivision if the subdivision is not full
// otherwise returns false
bool Subdivision:: add_house(House new_house){
    if(lift> new_house){
        return false;
    } else{
        return true;
    }
    
}

Subdivision::~Subdivision(){} // destructor