#pragma once
class Car {
public: string color; //���� ������
public: string number; //����� ������
public: string mark; //����� ������
public: bool create; //���������� ���������� �� �������� - �������� �� ������
public: bool park;//���������� ���������� �� �������� - ������������ �� ������
public: void parking()//����� ����������� �������� 
{
	park = true;
}
public: void leave()//����� ����������� ����� �� �������� 
{
	park = false;
}
};