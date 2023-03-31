//������� ��������� ������� �. �.
#include "Drobi_Lagutin.h"
#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

struct Atributs {
	int Chisl, Znam, Int;
};

Atributs arr[3];

//����
void Input(int &count) {
	int i=0;
	switch (count) {
	case 1:count = 0; break;
	case 0:count = 1; break;
	}
	while (count < 2) {
		count += 1;
		cout << "������� " << i+1 << "-�� �����:" << endl;
		cout << "����� �����:"; cin >> arr[i].Int;

		do {
			cout << "���������:"; cin >> arr[i].Chisl;
			if (arr[i].Chisl == 0) { cout << "��������� �� �������� ������!" << endl; }
		} while (arr[i].Chisl == 0);

		do {
			cout << "�����������:"; cin >> arr[i].Znam;
			if (arr[i].Znam == 0) { cout << "����������� �� ����� ���� ����� ����!" << endl; }
		} while (arr[i].Znam == 0);

		if ((arr[i].Int * arr[i].Chisl * arr[i].Znam) < 0) {
			arr[i].Chisl = -(abs(arr[i].Chisl) + abs(arr[i].Znam) * abs(arr[i].Int));
		}
		else { arr[i].Chisl = abs(arr[i].Chisl) + abs(arr[i].Znam) * abs(arr[i].Int); }
		arr[i].Znam = abs(arr[i].Znam);
		cout <<"���������� �����: "<<arr[i].Chisl << "/" << arr[i].Znam << endl;
		i++;
	}
}

//�����
void Output(int& flag, int& point) {
	if (point != 9) {
		switch (point) {
		case 0: {cout << "�����: " << arr[0].Chisl << "/" << arr[0].Znam << " > " << arr[1].Chisl << "/" << arr[1].Znam << endl; }break;
		case 1: {cout << "�����: " << arr[0].Chisl << "/" << arr[0].Znam << " < " << arr[1].Chisl << "/" << arr[1].Znam << endl; }break;
		case 2: {cout << "�����: " << arr[0].Chisl << "/" << arr[0].Znam << " = " << arr[1].Chisl << "/" << arr[1].Znam << endl; }break;
		}
	}
	else {
		if (arr[2].Chisl==arr[0].Chisl && arr[2].Znam == arr[0].Znam) {
			cout << "����� �� �����������." << endl;
		}
		cout << "�����: " << arr[2].Chisl << "/" << arr[2].Znam << " = "<<(double)arr[2].Chisl / arr[2].Znam << endl;
	}
}

//�����
void Sum(int &count) {
	count = 1;
	Input(count);
	if (arr[0].Znam == arr[1].Znam) {
		arr[2].Znam = arr[0].Znam;
		arr[2].Chisl = arr[0].Chisl + arr[1].Chisl;
	}
	else {
		arr[2].Znam = arr[0].Znam * arr[1].Znam;
		arr[2].Chisl = (arr[0].Chisl * arr[1].Znam) + (arr[1].Chisl * arr[0].Znam);
	}
	cout << arr[0].Chisl << "/" << arr[0].Znam << " + " << arr[1].Chisl << "/" << arr[1].Znam << " = " << arr[2].Chisl << "/" << arr[2].Znam << endl;
}

//��������
void Razn(int& count) {
	count = 1;
	Input(count);
	if (arr[0].Znam == arr[1].Znam) {
		arr[2].Znam = arr[0].Znam;
		arr[2].Chisl = arr[0].Chisl - arr[1].Chisl;
	}
	else {
		arr[2].Znam = arr[0].Znam * arr[1].Znam;
		arr[2].Chisl = (arr[0].Chisl * arr[1].Znam) - (arr[1].Chisl * arr[0].Znam);
	}
	cout << arr[0].Chisl << "/" << arr[0].Znam << " - " << arr[1].Chisl << "/" << arr[1].Znam << " = " << arr[2].Chisl << "/" << arr[2].Znam << endl;
}

//������������
void Proizved(int& count) {
	count = 1;
	Input(count);
	arr[2].Chisl = arr[0].Chisl * arr[1].Chisl;
	arr[2].Znam = arr[0].Znam * arr[1].Znam;
	cout << arr[0].Chisl << "/" << arr[0].Znam << " * " << arr[1].Chisl << "/" << arr[1].Znam << " = " << arr[2].Chisl << "/" << arr[2].Znam << endl;
}

//�������
void Delen(int& count) {
	count = 1;
	Input(count);
	int puzzles;
	puzzles = arr[1].Znam;
	arr[1].Znam = arr[1].Chisl;
	arr[1].Chisl = puzzles;
	arr[2].Chisl = arr[0].Chisl * arr[1].Chisl;
	arr[2].Znam = arr[0].Znam * arr[1].Znam;
	cout <<arr[0].Chisl << "/" << arr[0].Znam << " * " << arr[1].Chisl << "/" << arr[1].Znam << " = " << arr[2].Chisl << "/" << arr[2].Znam << endl;
}


//���������
void Sravn(int &point, int& count) {
	count = 1;
	Input(count);
	if (arr[0].Znam == arr[1].Znam) {
		if (arr[0].Chisl > arr[1].Chisl) { point = 0; }
		if (arr[0].Chisl < arr[1].Chisl) { point = 1; }
		if (arr[0].Chisl == arr[1].Chisl) { point = 2; }
	}
	else {
		if (arr[0].Chisl * arr[1].Znam * arr[0].Znam > arr[1].Chisl* arr[0].Znam * arr[1].Znam) { point = 0; }
		if (arr[0].Chisl * arr[1].Znam * arr[0].Znam < arr[1].Chisl * arr[0].Znam * arr[1].Znam) { point = 1; }
		if (arr[0].Chisl * arr[1].Znam * arr[0].Znam == arr[1].Chisl * arr[0].Znam * arr[1].Znam) { point = 2; }
	}
}

//����������
void Socr(int&flag, int&count) {
	count = 0;
	Input(count);
		for (int i = (int)sqrt(arr[0].Chisl); i > 0; i--) {
				if (arr[0].Chisl % i == 0 && arr[0].Znam % i == 0) {
					arr[2].Chisl = arr[0].Chisl / i;
					arr[2].Znam = arr[0].Znam / i;
					i = 0;
				}
		}
}

//������������� � ���� ���������� �����
void Decimal(int& count) {
	count = 0;
	Input(count);
	cout << "�����: " << (double)arr[0].Chisl / arr[0].Znam << endl;
}


void Menu_Drobi() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int  Number;
	do {
		int count = 0, point = 9, flag = 0;
		cout << "�������� �������� ��� ������/�������:" << endl;
		cout << "\t1)�����;" << endl << "\t2)��������;" << endl << "\t3)������������;" << endl << "\t4)�������;" << endl
			<< "\t5)���������;" << endl << "\t6)����������;" << endl << "\t7)������������� � ���� ���������� �����;" << endl << "������� '0' ��� ������ � ������� ����." << endl;
		cout << ">"; cin >> Number;
		switch (Number)
		{
		case 1:Sum(count); Output(flag, point); break;
		case 2:Razn(count); Output(flag, point); break;
		case 3:Proizved(count); Output(flag, point); break;
		case 4:Delen(count); Output(flag, point); break;
		case 5:Sravn(point, count); Output(flag, point); break;
		case 6:Socr(flag, count); Output(flag, point); break;
		case 7:Decimal(count); break;
		case 0: cout << "����� � ������� ����" << endl; break;
		default: cout << "������� �������� ��������! ���������� �����." << endl; break;
		}
	} while (Number != 0);
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
}