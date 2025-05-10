#include "Restaurant.hpp"
#include <iostream>

void Restaurant::displayInfo() {
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
}

void Restaurant::describeCuisine(){
  cout << "This restaurant serves various types of cuisines.";

}