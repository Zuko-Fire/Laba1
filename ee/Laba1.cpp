//Laba №1
//Create by...
//#include<vld.h>

#include <iostream>
#include <string>
#include <locale.h>
#include <Windows.h>
using namespace std;
class Car {
public: string color; //Цвет машины
public: string number; //Номер машины
public: string mark; //Марка машины
public: bool create; //Переменная отвечающая за проверку - создана ли машина
public: bool park; //Переменная отвечающая за проверку - припаркована ли машина
public: void parking()//Метод реализующий парковку 
{
	park = true;
}
public: void leave()//Метод реализующий выезд из парковки 
{
	park = false;
}
};
class Parking {
public:Car* cars = new Car[100];//Динамический массив для объектов типа Car

};
int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	Parking park;
	
	int add = 0;
	while (true)
	{
		int i = 0;

		cout << "1.Создать машину" << endl;
		cout << "2.Припарковать машину" << endl;
		cout << "3.Выехать с парковки" << endl;
		cout << "4.Вывести сведения об машине" << endl;
		cout << "5.Вывести все машины на парковке" << endl;
		cout << "6.Выход" << endl;
		cin >> i;
		if (i == 1) {
			cout << "Введите цвет" << endl;
			cin >> park.cars[add].color;
			cout << "Введите номер" << endl;
			cin >> park.cars[add].number;
			cout << "Введите марку" << endl;
			cin >> park.cars[add].mark;
			park.cars[add].create = true;
			park.cars[add].park = false;
			cout << "Машина(Объект) создана под индексом: " << add << endl;
			add++;
		}
		if (i == 2) {
			cout << "Введите индекс машины" << endl;
			cin >> i;
			if (park.cars[i].create == true) {
				if (park.cars[i].park == false) {
					park.cars[i].parking();
					cout << "Машина припарковалась" << endl;
				}

				else { cout << "Ошибка! машина уже припаркована" << endl; }


			}
			else { cout << "Ошибка! машины под этим индексом не существует" << endl; }
		}
		if (i == 3) {
			cout << "Введите индекс машины" << endl;
			cin >> i;
			if (park.cars[i].create == true) {
				if (park.cars[i].park == true) {
					park.cars[i].leave();
					cout << "Машина выехала с парковки" << endl;
				}

				else { cout << "Ошибка! машина не припаркована" << endl; }


			}
			else { cout << "Ошибка! машины под этим индексом не существует" << endl; }
		}
		if (i == 4) {

			cout << "Введите индекс машины" << endl;
			cin >> i;
			if (park.cars[i].create == true) {
				cout  <<"Машина: " "Цвет: " << park.cars[i].color << " Гос. номер: " << park.cars[i].number << " Марка: " << park.cars[i].mark;
				if (park.cars[i].park == true) { cout << " Припаркована: Да" << endl; }
				else { cout << " Припакована: Нет" << endl; }
			}
			else {
				cout << "Ошибка! машины не существует" << endl;
			}
		}
		if (i == 5) {
			for (int s = 0; s < add; s++) {
				if (park.cars[s].park == true) {
					cout << "Машина c индексом: " << s << endl;
				}
				else { cout << "Парковка пуста!" << endl; }
			}
		}
		if (i == 6) {
			delete[] park.cars;
			return 0;
		}
	}

};


