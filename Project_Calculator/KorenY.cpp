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
	cout << "Введите коэффиценты" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	double res = 0;
	if (a == 0) {
		cout << "Уравнение не имеет корней" << endl;
		return;
	}
	int a1, b1;
	cout << "Как введите отрезок, на котором будет происходить поиск корней"<<endl;
	cout << "Введите a: "; cin >> a1;
	cout << "Введите b :"; cin >> b1;
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
	cout << "Введите коэффиценты" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;
	double res = 0;
	if (a == 0) {
		cout << "Уравнение не имеет корней" << endl;
		return;
	}
	int a1, b1;
	cout << "Как введите отрезок, на котором будет происходить поиск корней" << endl;
	cout << "Введите a: "; cin >> a1;
	cout << "Введите b :"; cin >> b1;
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
	cout << "Введите коэффиценты" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	double res = 0;
	if (b <  0) {
		cout << "Уравнение не имеет корней" << endl;
		return;
	}
	int a1, b1;
	cout << "Как введите отрезок, на котором будет происходить поиск корней" << endl;
	cout << "Введите a: "; cin >> a1;
	cout << "Введите b :"; cin >> b1;
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
	cout << "Введите коэффиценты" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;
	double res = 0;
	if (a == 0) {
		cout << "Уравнение не имеет корней" << endl;
		return;
	}
	int a1, b1;
	cout << "Как введите отрезок, на котором будет происходить поиск корней" << endl;
	cout << "Введите a: "; cin >> a1;
	cout << "Введите b :"; cin >> b1;
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
	cout << "Введите коэффиценты" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;
	double res = 0;
	if (a == 0) {
		cout << "Уравнение не имеет корней" << endl;
		return;
	}
	int a1, b1;
	cout << "Как введите отрезок, на котором будет происходить поиск корней" << endl;
	cout << "Введите a: "; cin >> a1;
	cout << "Введите b :"; cin >> b1;
	res = DihCosinus(a, b, c, d, a1, b1);
	cout << res << endl;
}
double function6(double C, double arr[100], int n)
{
	double y = 0;
	for (int i = 0; i <= n; i++) {
		y += arr[i] * (pow(C, i));
	}
	return y;
}
double DihPolynom(int n, double arr[100], double A, double B) {
	double C = (A + B) / 2.0;
	if (function6(C, arr, n) == 0 || (B - A) / 2 < e)
		return C;
	if (function6(A, arr, n) * function6(C, arr, n) < 0)
		return DihPolynom(n, arr, A, C);
	return DihPolynom(n, arr, C, B);
}
void Polynom() {
	int n;
	double arr[100];
	double res;
	cout << "Введите степень: ";
	cin >> n;
	if (n <= 0) {
		cout << "Степень должна быть больше 0.";
		return;
	}
	cout << "Введите коэффицент, начиная с нулевой степени" << endl;
	for (int i = 0; i <= n; i++) {
		cout << "Введите коэффицент " << i + 1 << " одночлена: ";
		cin >> arr[i];
	}
	int a1, b1;
	cout << "Введите отрезок, на котором будет происходить поиск корней" << endl;
	cout << "Введите a: "; cin >> a1;
	cout << "Введите b: "; cin >> b1;
	res = DihPolynom(n, arr, a1, b1);
	cout << res << endl;
}
void  ChooseFunctionKoren() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int check; bool flag = true;
	do {
		cout << "Выберите тип графика функции" << endl;
		cout << "Введите 1 для нахождения корня степенной функции вида a*x^b+c" << endl;
		cout << "Введите 2 для нахождения корня показательной функции вида a*b^(c*x)+d" << endl;
		cout << "Введите 3 для нахождения корня логарифмической функции вида a*ln(b*x)+c" << endl;
		cout << "Введите 4 для нахождения корня синусоиды a*sin(b*x+c)+d" << endl;
		cout << "Введите 5 нахождения корня Косинусоиды a*cos(b*x+c)+d" << endl;
		cout << "Введите 6 нахождения корня полинома степени N" << endl;
		cout << "Введите 0, чтобы вернуться на предыдущий этап" << endl;
		cout << "Ввод: "; cin >> check;
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
			Polynom(); break;

		}
	} while (flag == true);
}