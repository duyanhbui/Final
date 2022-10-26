#pragma once
#include "AirCraft.h"
#include <string>

class Helicopter : public AirCraft
{
  private:
    static int heliID;
  protected:
    std :: string name;
    int craftID;
  public:
  Helicopter(int w, std :: string n);
  void fly(int headwind, int minutes);
  
  void set_name( std :: string n);
  void set_craftID();

  std :: string get_name();
  int get_craftID();
};