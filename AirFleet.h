#pragma once
#include "AirCraft.h"

class AirFleet : public AirCraft
{
  public:
  int count;
  AirCraft** fleet;

  AirFleet();
  int 
  void addAirCraft(AirCraft *aircraft);
  AirCraft **get_fleet();
  int get_count();

};