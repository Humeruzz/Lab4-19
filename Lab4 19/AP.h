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
	void APinput();//���� ����� ����
	void APsort(int);//���������� �� �����������
	void APprint();//����� � �������
	auto APsearch();//����� ��������
	void APBoutput();//�������� ����� ����� ����
	void APBinput();//�������� ���� ����� ����
};

