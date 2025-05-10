#ifndef JAPANESE_RESTAURANT_HPP
#define JAPANESE_RESTAURANT_HPP

#include "Restaurant.hpp"

class JapaneseRestaurant : virtual public Restaurant {
  private:
  bool hasTatami;
  public:
  JapaneseRestaurant(string name, string addr, bool tatamiAvailable) : Restaurant(name, addr), hasTatami(tatamiAvailable){}

  void describeCuisine();
};

#endif