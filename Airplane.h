#pragma once
#include "AirCraft.h"



class Airplane : public AirCraft
{
  public:
  Airplane();
  Airplane(int w, int p);

  int numPassengers;

  void fly(int headwind, int minutes);
  void reducePassengers(int x);
  int get_numPassengers();
};