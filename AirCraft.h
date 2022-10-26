#pragma once

class AirCraft
{
  protected:
    int weight;
    float fuel;
    int numberOfFlights;
  public:
  AirCraft();
  AirCraft(int w);
  void refuel();

  void set_fuel(float f);
  float get_fuel();
  
  void set_weight(int w);
  int get_weight();

  void set_numberOfFlights(int nf);
  int get_numberOfFlights();
  virtual void fly(int headwind, int minutes) = 0;
};