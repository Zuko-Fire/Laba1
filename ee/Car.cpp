#include <iostream>
#include<string>
#include "Car.h"
#include "Parking.h"
#include <locale.h>
#include <Windows.h>

using namespace std;
class Car {
private:string color; //���� ������
		string number; //����� ������
		string mark; //����� ������
		bool create; //���������� ���������� �� �������� - ������� �� ������
		bool IsParking; //���������� ���������� �� �������� - ������������ �� ������
public:Car(string number, string mark,string color, ){
	
	this -> create = true;
	this->IsParking = true;

	
}
	
	void parking()//����� ����������� �������� 
{
	this ->IsParking= true;
}
	 void leave()//����� ����������� ����� �� �������� 
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