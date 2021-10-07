#pragma once
#include <string>
#include<iostream>
using namespace std;
class Car {
/*private: string color; //Цвет машины
	     string number; //Номер машины
	     string mark; //Марка машины
	     bool create; //Переменная отвечающая за проверку - создана ли машина
	     bool IsParking; //Переменная отвечающая за проверку - припаркована ли машина*/
public:Car(string,string,string);
	  void parking();
	  void leave();
	  bool getCreate();
	  void getNumber();
	  void getMark();
	  void getColor();

};