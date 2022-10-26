#include "Helicopter.h"
#include <iostream>

int Helicopter :: heliID = 0;

Helicopter :: Helicopter(int w, std :: string n)
{
  this->craftID =  heliID;
  heliID++;
  
  this->weight = w;
  this->name =  n;

}

void Helicopter :: fly(int headwind, int minutes){
  if(headwind >= 40){
    this->fuel -= (0.4*minutes);
    if(this->weight > 5670){
      this->fuel -= (0.01* (this->weight - 5670 )*minutes);
    }
  }

  else{
    this->fuel -= (0.2*minutes);
    if(this->weight > 5670){
      this->fuel -= (0.01* (this->weight - 5670 )*minutes);
    }
  }

  if(this->fuel >= 20){
    numberOfFlights ++;
  }

}

void Helicopter :: set_name(std :: string n){
  this->name = n;
}
void Helicopter :: set_craftID(){
  this->craftID= heliID;
}

std :: string Helicopter :: get_name(){
  return this->name;
}

int Helicopter :: get_craftID(){
  return this->craftID;
}
