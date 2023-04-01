
#include "Extremumy.h"
#define e 0.001

void Vibor_nomera1(int& cnt)
{
	cout << endl << "¬ведите 0, чтобы выйти из программы;" << endl;
	cout << "¬ведите 1, чтобы найти экстремумы степенной функции a * x ^ b + c;" << endl;
	cout << "¬ведите 2, чтобы найти экстремумы показательной функции a*b^(c*x) + d;" << endl;
	cout << "¬ведите 3,чтобы найти экстремумы логарифмической функции a * ln(b*x)+c;" << endl;
	cout << "¬ведите 4,чтобы найти экстремумы синусоиды a * sin(b*x+c) + d;" << endl;
	cout << "¬ведите 5,чтобы найти экстремумы косинусоиды a * cos(b*x+c) + d;" << endl;
	cout << "¬ведите 6,чтобы найти полином N степени a0 + a1*x + a2*x^2 + ... + aN * x^N;" << endl;
	cout << "¬ведите номер задани€: "; cin >> cnt;
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
	cout << "степенна€ функци€ a * x ^ b + c" << endl;
	cout << endl << "¬ведите коэффициент a: "; cin >> a;
	cout << endl << "¬ведите коэффициент b: "; cin >> b;
	cout << endl << "¬ведите коэффициент c: "; cin >> c;
	do
	{
		cout << "¬ведите отрезок от x0 до x, причем x0 < x" << endl;
		cout << "¬ведите левую границу (x0): "; cin >> x0; cout << endl;
		cout << "¬ведите правую границу (x): "; cin >> x; cout << endl;
	} while (x0 >= x);

	cout << "Ёкстремумов нет" << endl;
}

void Pokazatelnaya()
{
	double a, b, c, d, x0, x;
	cout << " показательна€ функци€ a*b^(c*x) + d" << endl;
	cout << endl << "¬ведите коэффициент a: "; cin >> a;
	cout << endl << "¬ведите коэффициент b: "; cin >> b;
	cout << endl << "¬ведите коэффициент c: "; cin >> c;
	cout << endl << "¬ведите коэфиициент d: "; cin >> d;
	do
	{
		cout << "¬ведите отрезок от x0 до x, причем x0 < x" << endl;
		cout << "¬ведите левую границу (x0): "; cin >> x0; cout << endl;
		cout << "¬ведите правую границу (x): "; cin >> x; cout << endl;
	} while (x0 >= x);

	cout << "Ёкстремумов нет" << endl;
}

void Logarifmicheskaya()
{
	double a, b, c, x0, x;
	cout << "логарифмическа€ функци€ a * ln(b*x)+c" << endl;
	cout << endl << "¬ведите коэффициент a: "; cin >> a;
	cout << endl << "¬ведите коэффициент b: "; cin >> b;
	cout << endl << "¬ведите коэффициент c: "; cin >> c;
	do
	{
		cout << "¬ведите отрезок от x0 до x, причем x0 < x" << endl;
		cout << "¬ведите левую границу (x0): "; cin >> x0; cout << endl;
		cout << "¬ведите правую границу (x): "; cin >> x; cout << endl;
	} while (x0 >= x);

	cout << "Ёкстремумов нет" << endl;;
}

void Sinusoida()
{
	double a, b, c, d, x0, x;int  kmin, kmax;
	cout << "синусоида a * sin(b*x+c) + d" << endl;
	cout << endl << "¬ведите коэффициент a: "; cin >> a;
	do
	{
		cout << endl << "¬ведите коэффициент b: "; cin >> b;
	} while (b == 0);
	cout << endl << "¬ведите коэффициент c: "; cin >> c;
	cout << endl << "¬ведите коэфиициент d: "; cin >> d;
	do
	{
		cout << "¬ведите отрезок от x0 до x, причем x0 < x" << endl;
		cout << "¬ведите левую границу (x0): "; cin >> x0; cout << endl;
		cout << "¬ведите правую границу (x): "; cin >> x; cout << endl;
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
		cout << "экстремум функции = " << ((3.14 / 2) + 3.14 * i - c) / b << endl;
}
void Cosinusoida()
{
	double a, b, c, d, x0, x; int  kmin, kmax;
	cout << "косинусоида a * cos(b*x+c) + d" << endl;
	cout << endl << "¬ведите коэффициент a: "; cin >> a;
	do
	{
		cout << endl << "¬ведите коэффициент b: "; cin >> b;
	} while (b == 0);
	cout << endl << "¬ведите коэффициент c: "; cin >> c;
	cout << endl << "¬ведите коэфиициент d: "; cin >> d;
	do
	{
		cout << "¬ведите отрезок от x0 до x, причем x0 < x" << endl;
		cout << "¬ведите левую границу (x0): "; cin >> x0; cout << endl;
		cout << "¬ведите правую границу (x): "; cin >> x; cout << endl;
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
		cout << "экстремум функции = " << (3.14 * i - c) / b << endl;
}

void Palindrom()
{
	int N;
	double arr[100];
	cout << "¬ведите степень: ";
	cin >> N;
	if (N <= 0) {
		cout << "—тепень должна быть больше 0.";
		return;
	}
	cout << "¬ведите коэффицент, начина€ с нулевой степени" << endl;
	for (int i = 0; i <= N; i++) {
		cout << "¬ведите коэффицент " << i + 1 << " одночлена: ";
		cin >> arr[i];
	}
	int a1, b1;
	cout << "¬ведите отрезок, на котором будет происходить поиск корней" << endl;
	cout << "¬ведите a: "; cin >> a1;
	cout << "¬ведите b: "; cin >> b1;

	if (N % 2 == 0) cout << endl << "ѕолином имеет ровну 1 точку экстремума" << endl;
	else cout << endl << "“очек экстремума нет" << endl;

}