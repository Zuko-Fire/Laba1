#pragma once
class Car {
public: string color; //Цвет машины
public: string number; //Номер машины
public: string mark; //Марка машины
public: bool create; //Переменная отвечающая за проверку - созданал ли машина
public: bool park;//Переменная отвечающая за проверку - припаркована ли машина
public: void parking()//Метод реализующий парковку 
{
	park = true;
}
public: void leave()//Метод реализующий выезд из парковки 
{
	park = false;
}
};