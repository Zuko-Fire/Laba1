#pragma once
#include <string>
#include<iostream>
using namespace std;
class Car {
/*private: string color; //���� ������
	     string number; //����� ������
	     string mark; //����� ������
	     bool create; //���������� ���������� �� �������� - ������� �� ������
	     bool IsParking; //���������� ���������� �� �������� - ������������ �� ������*/
public:Car(string number,string mark,string color);
	  void parking();
	  void leave();
	  bool getCreate();
	  void getNumber();
	  void getMark();
	  void getColor();

};