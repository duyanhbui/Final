#include "AirFleet.h"
#include <iostream>

AirFleet :: AirFleet(){

};

void AirFleet :: addAirCraft(AirCraft *aircraft){};

AirCraft AirFleet :: **get_fleet(){
  return this->fleet;  
};



int AirFleet ::  get_count(){
  return this->count;
}