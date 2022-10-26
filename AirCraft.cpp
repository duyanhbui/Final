#include "AirCraft.h"
#include <iostream>
AirCraft :: AirCraft(){};


void AirCraft :: set_fuel(float f){
  this->fuel = f;
};
float AirCraft :: get_fuel(){
  return this->fuel;
};


void AirCraft :: set_weight(int w){
  this->weight = w;
};
int AirCraft :: get_weight(){
  return this->weight;
};


void AirCraft :: set_numberOfFlights(int nf){
  this->numberOfFlights = nf;
}

int AirCraft :: get_numberOfFlights(){
  return this->numberOfFlights;
}
AirCraft :: AirCraft(int w){
  this->weight = w;
};