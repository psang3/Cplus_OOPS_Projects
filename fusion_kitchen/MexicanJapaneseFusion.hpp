#ifndef MEXICAN_JAPANESE_FUSION_HPP
#define MEXICAN_JAPANESE_FUSION_HPP

#include "MexicanRestaurant.hpp"
#include "JapaneseRestaurant.hpp"
#include "Restaurant.hpp"

class MexicanJapaneseFusion : public MexicanRestaurant,JapaneseRestaurant{
  public:
 MexicanJapaneseFusion(string name, string addr, bool tatamiAvailable, int spceLevel);

 void describeCuisine();
 void displaySpeciality();
};
#endif