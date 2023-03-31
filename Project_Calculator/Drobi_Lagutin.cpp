//Функции реализует Лагутин Д. К.
#include "Drobi_Lagutin.h"
#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

struct Atributs {
	int Chisl, Znam, Int;
};

Atributs arr[3];

//Ввод
void Input(int &count) {
	int i=0;
	switch (count) {
	case 1:count = 0; break;
	case 0:count = 1; break;
	}
	while (count < 2) {
		count += 1;
		cout << "Введите " << i+1 << "-ую дробь:" << endl;
		cout << "Целая часть:"; cin >> arr[i].Int;

		do {
			cout << "Числитель:"; cin >> arr[i].Chisl;
			if (arr[i].Chisl == 0) { cout << "Выражение не является дробью!" << endl; }
		} while (arr[i].Chisl == 0);

		do {
			cout << "Знаменатель:"; cin >> arr[i].Znam;
			if (arr[i].Znam == 0) { cout << "Знаменатель не может быть равен нулю!" << endl; }
		} while (arr[i].Znam == 0);

		if ((arr[i].Int * arr[i].Chisl * arr[i].Znam) < 0) {
			arr[i].Chisl = -(abs(arr[i].Chisl) + abs(arr[i].Znam) * abs(arr[i].Int));
		}
		else { arr[i].Chisl = abs(arr[i].Chisl) + abs(arr[i].Znam) * abs(arr[i].Int); }
		arr[i].Znam = abs(arr[i].Znam);
		cout <<"Полученная дробь: "<<arr[i].Chisl << "/" << arr[i].Znam << endl;
		i++;
	}
}

//Вывод
void Output(int& flag, int& point) {
	if (point != 9) {
		switch (point) {
		case 0: {cout << "Ответ: " << arr[0].Chisl << "/" << arr[0].Znam << " > " << arr[1].Chisl << "/" << arr[1].Znam << endl; }break;
		case 1: {cout << "Ответ: " << arr[0].Chisl << "/" << arr[0].Znam << " < " << arr[1].Chisl << "/" << arr[1].Znam << endl; }break;
		case 2: {cout << "Ответ: " << arr[0].Chisl << "/" << arr[0].Znam << " = " << arr[1].Chisl << "/" << arr[1].Znam << endl; }break;
		}
	}
	else {
		if (arr[2].Chisl==arr[0].Chisl && arr[2].Znam == arr[0].Znam) {
			cout << "Дробь не сокращается." << endl;
		}
		cout << "Ответ: " << arr[2].Chisl << "/" << arr[2].Znam << " = "<<(double)arr[2].Chisl / arr[2].Znam << endl;
	}
}

//Сумма
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

//Разность
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

//Произведение
void Proizved(int& count) {
	count = 1;
	Input(count);
	arr[2].Chisl = arr[0].Chisl * arr[1].Chisl;
	arr[2].Znam = arr[0].Znam * arr[1].Znam;
	cout << arr[0].Chisl << "/" << arr[0].Znam << " * " << arr[1].Chisl << "/" << arr[1].Znam << " = " << arr[2].Chisl << "/" << arr[2].Znam << endl;
}

//Деление
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


//Сравнение
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

//Сокращение
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

//Представление в виде десятичной дроби
void Decimal(int& count) {
	count = 0;
	Input(count);
	cout << "Ответ: " << (double)arr[0].Chisl / arr[0].Znam << endl;
}


void Menu_Drobi() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int  Number;
	do {
		int count = 0, point = 9, flag = 0;
		cout << "Выберите действие над дробью/дробями:" << endl;
		cout << "\t1)Сумма;" << endl << "\t2)Разность;" << endl << "\t3)Произведение;" << endl << "\t4)Деление;" << endl
			<< "\t5)Сравнение;" << endl << "\t6)Сокращение;" << endl << "\t7)Представление в виде десятичной дроби;" << endl << "Введите '0' для выхода в главное меню." << endl;
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
		case 0: cout << "Выход в главное меню" << endl; break;
		default: cout << "Введено неверное значение! Попробуйте снова." << endl; break;
		}
	} while (Number != 0);
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
}