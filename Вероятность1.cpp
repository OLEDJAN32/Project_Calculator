#include<iostream>
#include"Вероятность.h"
using namespace std;

void Menu_Veroiatnost()
{
	setlocale(LC_ALL, "Russian");
	int cnt, n, N; bool flag = true; double m;
	float* massiv_p; int* massiv_x;
	do
	{
		do { Vibor_nomera(cnt); } while (cnt < 0 || cnt > 3);
		switch (cnt)
		{
		case 0: flag = false; break;
		case 1: Input_Veroiatnost(m, n); Veroiatnost(m, n); break;
		case 2: do { cout << endl << "Введите количество величин: "; cin >> N; } while (N <= 0); massiv_p = new float[N]; massiv_x = new int[N]; Input_Dispersia(massiv_p, massiv_x, N); Dispersia(massiv_p, massiv_x, N);
			delete[]massiv_x; delete[]massiv_p; break;
		case 3:do { cout << endl << "Введите количество величин: "; cin >> N; } while (N <= 0); massiv_p = new float[N]; massiv_x = new int[N]; Input_Dispersia(massiv_p, massiv_x, N); Mat_Ogidanie(massiv_p, massiv_x, N);
			delete[]massiv_x; delete[]massiv_p; break;
		default: break;
		}
	} while (flag == true);
}

void Vibor_nomera(int& cnt)
{
	cout << endl << "Введите 0, чтобы выйти из программы;" << endl;
	cout << "Введите 1, чтобы найти вероятность отношение числа благоприятных событий к общему числу событий;" << endl;
	cout << "Введите 2, чтобы найти дисперсию для дискретного распределения величин;" << endl;
	cout << "Введите 3, чтобы найти математическое ожидание для дискретного распределения величин;" << endl;
	cout << "Введите номер задания: "; cin >> cnt;
}

void Input_Veroiatnost(double& m, int& n)
{
	do
	{
		cout << endl << "Введите общее число событий: "; cin >> n;
		cout << endl << "Введите число благоприятных событий: "; cin >> m;
	} while (m <= 0 || n <= 0 || n < m);
}
void Input_Dispersia(float* massiv_p, int* massiv_x, int& N)
{
	float summ, x = 1;
	do {
		summ = 0;
		for (int i = 0; i < N; i++)
		{
			cout << endl << "Введите " << i + 1 << " случайную величину: "; cin >> massiv_x[i]; cout << endl;
			do
			{
				cout << "Введите вероятность " << i + 1 << " случайной величины: "; cin >> massiv_p[i]; cout << endl;
			} while (massiv_p[i] < 0 || massiv_p[i]>1);
			summ += massiv_p[i];
		}

	} while (fabs(summ - x) > FLT_EPSILON);
}

void Veroiatnost(double& m, int& n)
{
	double rezultat = 0;
	rezultat = m / n;
	printf("Вероятность появления события: %.3f", rezultat);
}

void Dispersia(float* massiv_p, int* massiv_x, int& N)
{
	double M_x_2 = 0, M_x = 0, rezultat;
	for (int i = 0; i < N; i++)
	{
		M_x_2 += massiv_x[i] * massiv_x[i] * massiv_p[i];
		M_x += massiv_x[i] * massiv_p[i];
	}
	rezultat = M_x_2 - (M_x * M_x);
	cout << "Дисперсия случайной величины = " << rezultat << endl;
}

void Mat_Ogidanie(float* massiv_p, int* massiv_x, int& N)
{
	double Math_summ = 0;
	for (int i = 0; i < N; i++) Math_summ += massiv_p[i] * massiv_x[i];
	cout << "Математическое ожидание = " << Math_summ << endl;
}

