//Laba №1
//Create by...
//#include<vld.h>
#include <iostream>
#include <string>
#include <locale.h>
#include <Windows.h>
#include "Car.h"
#include "Parking.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	
	
	int add = 0;
	while (true)
	{
		Parking park;
		int i = 0;

		cout << "1.Создать машину и припарковать" << endl;
		cout << "2.Припарковать машину" << endl;
		cout << "3.Выехать с парковки" << endl;
		cout << "4.Вывести сведения об машине" << endl;
		cout << "5.Вывести все машины на парковке" << endl;
		cout << "6.Выход" << endl;
		cin >> i;
		if (i == 1)
		{
			string number, mark, color;
			cout << "Введите через пробел: номер, марку, цвет" << endl;
			cin >> number, mark, color;
			Car* car= new Car(number, mark,color);
			//park.add(*car);


		};
		if (i == 2) {};


		if (i == 3) {};
	
		if (i == 4) {};
		if (i == 5) {
			/*for (int s = 0; s < add; s++) {
				if (park.cars[s].IsParking == true) {
					cout << "Машина c индексом: " << s << endl;
				}
				else { cout << "Парковка пуста!" << endl; }*/
		};
		if (i == 6) {
			return 0;
		};
	}

};


