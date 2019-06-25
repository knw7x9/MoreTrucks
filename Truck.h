#include "Vehicle.h"
#pragma once
#include <string>

class Truck : public Vehicle{
private:
  bool _Awd;
  int _Towing_Capacity;
public:
  // Get and set all wheel drive of the truck
  std::string getAwd() const {
    if(_Awd == true){
      return "4x4";
    } else {
      return "4x2";
    }
  };
  void setAwd(bool awd){_Awd = awd;};

  // Get and set the towing capacity of the truck
  int getTowing_Capacity(){return _Towing_Capacity;};
  void setTowing_Capacity(int towingCapacity){_Towing_Capacity = towingCapacity;};

  // Default Constructor
  Truck();

  //Destructor
  ~Truck();

  //Overload Constructor with 8 parameters
  Truck(int year, double miles, double value, std::string manufacturer, std::string model, bool awd, int towingCapacity, double value_date);
};
