
#include "Extremumy.h"
#define e 0.001

void Vibor_nomera1(int& cnt)
{
	cout << endl << "������� 0, ����� ����� �� ���������;" << endl;
	cout << "������� 1, ����� ����� ���������� ��������� ������� a * x ^ b + c;" << endl;
	cout << "������� 2, ����� ����� ���������� ������������� ������� a*b^(c*x) + d;" << endl;
	cout << "������� 3,����� ����� ���������� ��������������� ������� a * ln(b*x)+c;" << endl;
	cout << "������� 4,����� ����� ���������� ��������� a * sin(b*x+c) + d;" << endl;
	cout << "������� 5,����� ����� ���������� ����������� a * cos(b*x+c) + d;" << endl;
	cout << "������� 6,����� ����� ������� N ������� a0 + a1*x + a2*x^2 + ... + aN * x^N;" << endl;
	cout << "������� ����� �������: "; cin >> cnt;
}

void Menu_Ekstremum()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int cnt; bool flag = true;
	do
	{
		do { Vibor_nomera1(cnt); } while (cnt < 0 || cnt > 6);
		switch (cnt)
		{
		case 0: 
			SetConsoleCP(65001);
			SetConsoleOutputCP(65001);
			flag = false; break;
		case 1: Stepennaya(); break;
		case 2: Pokazatelnaya(); break;
		case 3: Logarifmicheskaya(); break;
		case 4: Sinusoida(); break;
		case 5: Cosinusoida(); break;
		case 6: Palindrom(); break;

		default: break;
		}
	} while (flag == true);
}


void Stepennaya()
{
	double a, b, c, x0, x;
	cout << "��������� ������� a * x ^ b + c" << endl;
	cout << endl << "������� ����������� a: "; cin >> a;
	cout << endl << "������� ����������� b: "; cin >> b;
	cout << endl << "������� ����������� c: "; cin >> c;
	do
	{
		cout << "������� ������� �� x0 �� x, ������ x0 < x" << endl;
		cout << "������� ����� ������� (x0): "; cin >> x0; cout << endl;
		cout << "������� ������ ������� (x): "; cin >> x; cout << endl;
	} while (x0 >= x);

	cout << "����������� ���" << endl;
}

void Pokazatelnaya()
{
	double a, b, c, d, x0, x;
	cout << " ������������� ������� a*b^(c*x) + d" << endl;
	cout << endl << "������� ����������� a: "; cin >> a;
	cout << endl << "������� ����������� b: "; cin >> b;
	cout << endl << "������� ����������� c: "; cin >> c;
	cout << endl << "������� ����������� d: "; cin >> d;
	do
	{
		cout << "������� ������� �� x0 �� x, ������ x0 < x" << endl;
		cout << "������� ����� ������� (x0): "; cin >> x0; cout << endl;
		cout << "������� ������ ������� (x): "; cin >> x; cout << endl;
	} while (x0 >= x);

	cout << "����������� ���" << endl;
}

void Logarifmicheskaya()
{
	double a, b, c, x0, x;
	cout << "��������������� ������� a * ln(b*x)+c" << endl;
	cout << endl << "������� ����������� a: "; cin >> a;
	cout << endl << "������� ����������� b: "; cin >> b;
	cout << endl << "������� ����������� c: "; cin >> c;
	do
	{
		cout << "������� ������� �� x0 �� x, ������ x0 < x" << endl;
		cout << "������� ����� ������� (x0): "; cin >> x0; cout << endl;
		cout << "������� ������ ������� (x): "; cin >> x; cout << endl;
	} while (x0 >= x);

	cout << "����������� ���" << endl;;
}

void Sinusoida()
{
	double a, b, c, d, x0, x;int  kmin, kmax;
	cout << "��������� a * sin(b*x+c) + d" << endl;
	cout << endl << "������� ����������� a: "; cin >> a;
	do
	{
		cout << endl << "������� ����������� b: "; cin >> b;
	} while (b == 0);
	cout << endl << "������� ����������� c: "; cin >> c;
	cout << endl << "������� ����������� d: "; cin >> d;
	do
	{
		cout << "������� ������� �� x0 �� x, ������ x0 < x" << endl;
		cout << "������� ����� ������� (x0): "; cin >> x0; cout << endl;
		cout << "������� ������ ������� (x): "; cin >> x; cout << endl;
	} while (x0 >= x);

	if (b > 0)
	{
		kmin = round((b * x0 + c) / 3.14);
		kmax = round((b * x + c) / 3.14);
	}
	if (b < 0)
	{
		kmin = round(((b * x + c) / 3.14) + (0.5));
		kmax = round(((b * x0 + c) / 3.14) + (0.5));
	}
	for (double i = kmin; i < kmax; i++)
		cout << "��������� ������� = " << ((3.14 / 2) + 3.14 * i - c) / b << endl;
}
void Cosinusoida()
{
	double a, b, c, d, x0, x; int  kmin, kmax;
	cout << "����������� a * cos(b*x+c) + d" << endl;
	cout << endl << "������� ����������� a: "; cin >> a;
	do
	{
		cout << endl << "������� ����������� b: "; cin >> b;
	} while (b == 0);
	cout << endl << "������� ����������� c: "; cin >> c;
	cout << endl << "������� ����������� d: "; cin >> d;
	do
	{
		cout << "������� ������� �� x0 �� x, ������ x0 < x" << endl;
		cout << "������� ����� ������� (x0): "; cin >> x0; cout << endl;
		cout << "������� ������ ������� (x): "; cin >> x; cout << endl;
	} while (x0 >= x);

	if (b > 0)
	{
		kmin = round((b * x0 + c) / 3.14) + (0.5);
		kmax = round((b * x + c) / 3.14) + (0.5);
	}
	if (b < 0)
	{
		kmin = round(((b * x + c) / 3.14) + (0.5));
		kmax = round(((b * x0 + c) / 3.14) + (0.5));
	}
	for (double i = kmin; i < kmax; i++)
		cout << "��������� ������� = " << (3.14 * i - c) / b << endl;
}

void Palindrom()
{
	int N;
	double arr[100];
	cout << "������� �������: ";
	cin >> N;
	if (N <= 0) {
		cout << "������� ������ ���� ������ 0.";
		return;
	}
	cout << "������� ����������, ������� � ������� �������" << endl;
	for (int i = 0; i <= N; i++) {
		cout << "������� ���������� " << i + 1 << " ���������: ";
		cin >> arr[i];
	}
	int a1, b1;
	cout << "������� �������, �� ������� ����� ����������� ����� ������" << endl;
	cout << "������� a: "; cin >> a1;
	cout << "������� b: "; cin >> b1;

	if (N % 2 == 0) cout << endl << "������� ����� ����� 1 ����� ����������" << endl;
	else cout << endl << "����� ���������� ���" << endl;

}