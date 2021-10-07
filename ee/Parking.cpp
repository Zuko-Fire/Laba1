#include <iostream>
#include "Car.h"
#include <string>
#include <locale.h>
#include <Windows.h>
class Parking {
	int x = 0;
public:Car* cars = new Car[5];//Динамический массив для объектов типа Car
	  void add(Car car)
	  {
		  string isnomber;
		  for (int i = 0; i < x; i++) {
			  if (car.getNumber == cars[i])
			  {
				  isnomber = car.getNumber;
			  }
			if (car.getNumber != isnomber)
			{
				cars[x] 
			}
		  }
	  }
}