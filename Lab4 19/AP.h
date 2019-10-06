#pragma once
#include <iostream>

using namespace std;

class AP
{
private:
	string code, fl, group;
	int	avMark;
public:
	AP();
	AP(string, string, string, int);
	void APinput();//ввод через файл
	void APsort(int);//Сортировка по возрастанию
	void APprint();//Вывод в консоль
	auto APsearch();//Поиск элемента
	void APBoutput();//Бинарынй вывод через файл
	void APBinput();//Бинарный ввод через файл
};

