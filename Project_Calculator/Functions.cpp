#include "Header_Functions.h"


void Menu_Functions() {
	
	//setlocale(LC_ALL, "rus");
	int check; bool flag = true;
	do {
		cout << "������� 0, ����� ������� � ������� ���� ������������" << endl;
		cout << "�������� �������� ��� ��������" << endl;
		cout << "������� 1 ��� ���������� ������������� ��������� �� �������" << endl;
		cout << "������� 2 ��� ���������� ������� ������� " << endl;
		cout << "������� 3 ��� ������ ����� Y = 0 �� �������" << endl;
		cout << "������� 4 ��� ������ ����������� �� �������" << endl;
		cout << "����: "; cin >> check;
		switch (check) {
		case 1:
			cout << endl;
		case 2:
			cout << endl;
		case 3:
			cout << endl;
		case 4:
			cout << endl;
		case 0:
			flag = false; break;
		}
	} while (flag == true);
	//return;
}