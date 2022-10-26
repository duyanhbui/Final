#include "AirCraft.h"

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


int AirCraft :: get_numberOfFlights(){
  return this->numberOfFlights;
}
AirCraft :: AirCraft(int w){
  this->weight = w;
};