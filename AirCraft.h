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
  virtual void fly(int headwind, int minutes) = 0;
};