#include "KorenY.h"
#define e 0.001

double function1(double x, double a, double b, double c)
{
	return a * pow(x, b) + c;
}
double DihStepen(double a, double b, double c, int A, int B) {
	double C = (A + B) / 2.0;
	if (function1(C, a, b, c) == 0 || (B - A) / 2 < e)
		return C;
	if (function1(A, a, b, c) * function1(C, a, b, c) < 0)
		return DihStepen(a, b, c,A,C);
	return DihStepen(a, b, c,C, B);
}
void StepenKoren() {
	double a, b, c;
	cout << "������� �����������" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	double res = 0;
	if (a == 0) {
		cout << "��������� �� ����� ������" << endl;
		return;
	}
	int a1, b1;
	cout << "��� ������� �������, �� ������� ����� ����������� ����� ������"<<endl;
	cout << "������� a: "; cin >> a1;
	cout << "������� b :"; cin >> b1;
	res = DihStepen(a, b, c, a1, b1);
	cout << res << endl;
	}
double function2(double x, double a, double b, double c,double d)
{
	return a * pow(b, x*c) + d;
}
double DihPokaz(double a, double b, double c, double d, int A, int B) {
	double C = (A + B) / 2.0;
	if (function2(C, a, b, c,d) == 0 || (B - A) / 2 < e)
		return C;
	if (function2(A, a, b, c,d) * function2(C, a, b, c,d) < 0)
		return DihPokaz(a, b, c, d, A,C);
	return DihPokaz(a, b, c, d,C,B);
}
void StepenPokaz() {
	double a, b, c, d;
	cout << "������� �����������" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;
	double res = 0;
	if (a == 0) {
		cout << "��������� �� ����� ������" << endl;
		return;
	}
	int a1, b1;
	cout << "��� ������� �������, �� ������� ����� ����������� ����� ������" << endl;
	cout << "������� a: "; cin >> a1;
	cout << "������� b :"; cin >> b1;
	res = DihPokaz(a, b, c, d,a1, b1);
	cout << res << endl;
}
double function3(double x, double a, double b, double c)
{
	return a*log(b*x)+c;
}
double DihLog(double a, double b, double c, int A, int B) {
	double C = (A + B) / 2.0;
	if (function3(C, a, b, c) == 0 || (B - A) / 2 < e)
		return C;
	if (function3(A, a, b, c) * function3(C, a, b, c) < 0)
		return DihLog(a, b, c, A, C);
	return DihLog(a, b, c, C, B);
}
void Log() {
	double a, b, c, d;
	cout << "������� �����������" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	double res = 0;
	if (b <  0) {
		cout << "��������� �� ����� ������" << endl;
		return;
	}
	int a1, b1;
	cout << "��� ������� �������, �� ������� ����� ����������� ����� ������" << endl;
	cout << "������� a: "; cin >> a1;
	cout << "������� b :"; cin >> b1;
	res = DihLog(a, b, c, a1, b1);
	cout << res << endl;
}
double function4(double x, double a, double b, double c, double d)
{
	return a * sin(b * x + c) + d;
}
double DihSinus(double a, double b, double c, double d, int A, int B) {
	double C = (A + B) / 2.0;
	if (function4(C, a, b, c, d) == 0 || (B - A) / 2 < e)
		return C;
	if (function4(A, a, b, c, d) * function4(C, a, b, c, d) < 0)
		return DihSinus(a, b, c, d, A, C);
	return DihSinus(a, b, c, d, C, B);
}
void Sinus() {
	double a, b, c, d;
	cout << "������� �����������" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;
	double res = 0;
	if (a == 0) {
		cout << "��������� �� ����� ������" << endl;
		return;
	}
	int a1, b1;
	cout << "��� ������� �������, �� ������� ����� ����������� ����� ������" << endl;
	cout << "������� a: "; cin >> a1;
	cout << "������� b :"; cin >> b1;
	res = DihSinus(a, b, c, d, a1, b1);
	cout << res << endl;
}
double function5(double x, double a, double b, double c, double d)
{
	return a * cos(b * x + c) + d;
}
double DihCosinus(double a, double b, double c, double d, int A, int B) {
	double C = (A + B) / 2.0;
	if (function5(C, a, b, c, d) == 0 || (B - A) / 2 < e)
		return C;
	if (function5(A, a, b, c, d) * function5(C, a, b, c, d) < 0)
		return DihCosinus(a, b, c, d, A, C);
	return DihCosinus(a, b, c, d, C, B);
}
void Cosinus() {
	double a, b, c, d;
	cout << "������� �����������" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;
	double res = 0;
	if (a == 0) {
		cout << "��������� �� ����� ������" << endl;
		return;
	}
	int a1, b1;
	cout << "��� ������� �������, �� ������� ����� ����������� ����� ������" << endl;
	cout << "������� a: "; cin >> a1;
	cout << "������� b :"; cin >> b1;
	res = DihCosinus(a, b, c, d, a1, b1);
	cout << res << endl;
}
void  ChooseFunctionKoren() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int check; bool flag = true;
	do {
		cout << "�������� ��� ������� �������" << endl;
		cout << "������� 1 ��� ���������� ����� ��������� ������� ���� a*x^b+c" << endl;
		cout << "������� 2 ��� ���������� ����� ������������� ������� ���� a*b^(c*x)+d" << endl;
		cout << "������� 3 ��� ���������� ����� ��������������� ������� ���� a*ln(b*x)+c" << endl;
		cout << "������� 4 ��� ���������� ����� ��������� a*sin(b*x+c)+d" << endl;
		cout << "������� 5 ���������� ����� ����������� a*cos(b*x+c)+d" << endl;
		cout << "������� 6 ���������� ����� �������� ������� N" << endl;
		cout << "������� 0, ����� ��������� �� ���������� ����" << endl;
		cout << "����: "; cin >> check;
		switch (check) {
		case 0:
			SetConsoleCP(65001);
			SetConsoleOutputCP(65001);
			flag = false; break;
		case 1:
			StepenKoren(); break;
		case 2:
			StepenPokaz(); break;
		case 3:
			Log(); break;
		case 4:
			Sinus(); break;
		case 5:
			Cosinus(); break;
		case 6:
			cout << endl;

		}
	} while (flag == true);
}