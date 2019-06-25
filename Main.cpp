// Main.cpp
// CS 4499
// Written By: Katherine Wilsdon
// 27 February 2019
// Dr. Kerby
// Description - Updates the value of a truck from July 1, 2015 to February 27,
// 2019. Estimates the value of six trucks on April 1, 2022.

#include "Vehicle.h"
#include "Truck.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

// returns a vector containing each truck price at the estimated date
vector<float> estVal(vector<Truck> const& vectorOfTrucks, double const& futureDate) {
  vector<float> truckEstimatedValue;
  for (int i = 0; i < vectorOfTrucks.size(); i++){
    truckEstimatedValue.push_back(vectorOfTrucks[i].EstimateValue(futureDate));
  }
  return truckEstimatedValue;
}

int main(){
  // Warm up with pointers
  int x;
  int y;
  int* p1 = &x;
  *p1 = 99;
  cout << "The value of x is " << x << endl;
  p1 = &y;
  *p1 = -300;
  cout << "The value of y is " << y << endl << endl;

  // Create a truck, update the truck's value to the current date, and output the statistics
  Truck myTruck(2015, 0, 37000, "Chevrolet", "Colorado", true, 5000, 2015.501);
  myTruck.UpdateValue(2019.158);
  cout << "Value of my truck is $" << fixed << setprecision(2) << myTruck.getValue() << " on " << fixed << setprecision(3) << myTruck.getValue_Date() << endl << endl;

  // Create a vector of trucks
  vector<Truck> trucks;
  //https://www.toyota.com/tacoma/features/mpg/7594/7544/7582
  trucks.push_back(Truck(2019, 35, 31815, "Toyota", "Tacoma SR", true, 6400, 2019.041));
  //https://www.ford.com/trucks/ranger/
  trucks.push_back(Truck(2019, 18, 24300, "Ford", "Ranger XL", true, 7500, 2019.098));
  //https://www.ford.com/trucks/f150/?gnav=header-all-vehicles
  trucks.push_back(Truck(2019, 29, 28155, "Ford", "F-150", false, 8000, 2019.147));
  //https://www.chevrolet.com/trucks/colorado-mid-size-truck
  trucks.push_back(Truck(2019, 41, 21300, "Chevrolet", "Colorado", true, 7700, 2019.005));
  //https://www.chevrolet.com/previous-year/silverado-1500-pickup-truck
  trucks.push_back(Truck(2018, 78, 28300, "Chevrolet", "Siverado", true, 7600, 2018.767));

  //Create a vector of the estimated values of the trucks from the truck vector
    double const estimate_date =2022.25;
  vector<float> estimatedValueOfTrucks = estVal(trucks, estimate_date);

  // Print the estimated values for each truck in the vector
  for (int i = 0; i < trucks.size(); i++) {
    cout << trucks.at(i).getYear() << " "<< trucks.at(i).getManufacturer()<< " " << trucks.at(i).getModel() << " has a value of $" << fixed << setprecision(2) << estimatedValueOfTrucks.at(i) << " on " << estimate_date << endl;
  }

  return 0;
}
