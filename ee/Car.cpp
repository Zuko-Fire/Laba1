#include <iostream>
#include<string>
#include "Car.h"
#include "Parking.h"
#include <locale.h>
#include <Windows.h>

using namespace std;
class Car {
private:string color; //Цвет машины
		string number; //Номер машины
		string mark; //Марка машины
		bool create; //Переменная отвечающая за проверку - создана ли машина
		bool IsParking; //Переменная отвечающая за проверку - припаркована ли машина
public:Car(string number, string mark,string color, ){
	
	this -> create = true;
	this->IsParking = true;

	
}
	
	void parking()//Метод реализующий парковку 
{
	this ->IsParking= true;
}
	 void leave()//Метод реализующий выезд из парковки 
{
	this ->IsParking = false;
}
	 bool getCreate() {
		 return this->create;
	}
	 void getNumber()
	 {
		 return this->number;
	 }
	 void getMark()
	 {
		 return this->mark;
	 }
	 void getColor()
	 {
		 return this->color;
	 }
};