#include "Airplane.h"


Airplane :: Airplane(){};

Airplane :: Airplane(int w, int p){
  this->weight = w;
  this->numPassengers = p;
};


void Airplane :: fly(int headwind, int minutes)
{
  if(headwind >= 60){
    this->fuel -= (0.5*minutes);
    this->fuel -= (0.001* (this->numPassengers )*minutes);
  }
  else{

    this->fuel -= (0.3*minutes);
    this->fuel -= (0.001* (this->numPassengers )*minutes);
  }

  if(this->fuel >= 20)
    numberOfFlights ++;
}


void Airplane :: reducePassengers(int x)
{
  this->numPassengers  -= x;
}

int Airplane :: get_numPassengers(){
  return numPassengers;
}