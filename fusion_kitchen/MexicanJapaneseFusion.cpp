#include "MexicanJapaneseFusion.hpp"
#include <iostream>

MexicanJapaneseFusion::MexicanJapaneseFusion(string name, string addr, int spceLevel, bool tatamiAvailable)
    : Restaurant(name, addr), MexicanRestaurant(name, addr, spceLevel), JapaneseRestaurant(name, addr, tatamiAvailable) {}

void MexicanJapaneseFusion::describeCuisine(){
  cout << "A unique fusion of Mexican and Japanese cuisines" << endl;

}

void MexicanJapaneseFusion::displaySpecialty(){
  cout << "Our specialties combine both cuisines - try our Sushi Tacos and Wasabi Guacamole!" << endl;
}