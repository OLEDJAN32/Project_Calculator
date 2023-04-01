#include "HeaderIntegral.h"
#include <Windows.h>
double F_polynom(double x, int* a, int& N)
{
	double f = 0;
	for (int i = 0; i < N; i++)
	{
		f = f + (a[i] * pow(x, i));
	}
	return f;
}
void PolynomOne()
{
	int N;
	double S = 0, x, h, A, B;
	printf("Функция вида: a0+a1*x+a2*x^2+...+aN*x^N\n");
	printf("Введите начало отрезка (A) и конец (B)\n");
	printf("A="); scanf("%lf", &A);
	printf("B="); scanf("%lf", &B);
	while (A > B)
	{
		printf("Ошибка, начало отрезка должно быть меньше или равно концу отрезка, введите данные заново:\n");
		printf("A="); scanf("%lf", &A);
		printf("B="); scanf("%lf", &B);
	}

	printf("Введите число N (на единицу больше необходимого): "); scanf("%d", &N);
	while (N < 0)
	{
		printf("Ошибка, N должно быть больше или равно нулю, введите данные заново:\n");
		printf("Введите число N: "); scanf("%d", &N);
	}

	int* a;
	a = (int*)malloc(N * sizeof(int));
	printf("Введите коэффициенты а:\n");
	for (int i = 0; i < N; i++)
	{
		printf("a[%d]=", i); scanf("%d", &a[i]);
	}

	h = (B - A) / E;
	x = A + h;
	while (x < B)
	{
		S = S + 4 * F_polynom(x, a, N);
		x = x + h;
		if (x >= B) break;
		S = S + 2 * F_polynom(x, a, N);
		x = x + h;
	}
	S = (h / 3) * (S + F_polynom(A, a, N) + F_polynom(B, a, N));
	printf("Определенный интеграл полинома на отрезке [%.3lf;%.3lf] с N=%d, равен: %.3lf\n", A, B, N-1,S);
	free(a);
}
//----------------------------------------------------------------------------------------------------------------------------------------
double F_stepen(double x, double a, double b, double c)
{
	double f;
	f = a * pow(x, b) + c;
	return f;
}

void stepen()
{
	double S = 0, x, a, b, c, h, A, B;
	printf("Функция вида: a*x^b+c\n");
	printf("Введите начало отрезка (A) и конец (B)\n");
	printf("A="); scanf("%lf", &A);
	printf("B="); scanf("%lf", &B);
	while (A > B)
	{
		printf("Ошибка, начало отрезка должно быть меньше или равно концу отрезка, введите данные заново:\n");
		printf("A="); scanf("%lf", &A);
		printf("B="); scanf("%lf", &B);
	}
	printf("Введите коэффициенты:\n");
	printf("a="); scanf("%lf", &a);
	printf("b="); scanf("%lf", &b);
	printf("c="); scanf("%lf", &c);

	h = (B - A) / E;
	x = A + h;
	while (x < B)
	{
		S = S + 4 * F_stepen(x, a, b, c);
		x = x + h;
		if (x >= B) break;
		S = S + 2 * F_stepen(x, a, b, c);
		x = x + h;
	}
	S = (h / 3) * (S + F_stepen(A, a, b, c) + F_stepen(B, a, b, c));
	printf("Определенный интеграл степенной функции на отрезке [%.3lf;%.3lf] равен: %.3lf\n", A, B, S);
}
//----------------------------------------------------------------------------------------------------------------------------------------
double F_pokazatel(double x, double a, double b, double c, double d)
{
	double f;
	f = a * pow(b, (c * x)) + d;
	return f;
}

void pokazatel()
{
	double S = 0, x, a, b, c, h, A, B, d;
	printf("Функция вида: a*b^(c*x)+d\n");
	printf("Введите начало отрезка (A) и конец (B)\n");
	printf("A="); scanf("%lf", &A);
	printf("B="); scanf("%lf", &B);
	while (A > B)
	{
		printf("Ошибка, начало отрезка должно быть меньше или равно концу отрезка, введите данные заново:\n");
		printf("A="); scanf("%lf", &A);
		printf("B="); scanf("%lf", &B);
	}
	printf("Введите коэффициенты:\n");
	printf("a="); scanf("%lf", &a);
	printf("b="); scanf("%lf", &b);
	printf("c="); scanf("%lf", &c);
	printf("d="); scanf("%lf", &d);

	h = (B - A) / E;
	x = A + h;
	while (x < B)
	{
		S = S + 4 * F_pokazatel(x, a, b, c, d);
		x = x + h;
		if (x >= B) break;
		S = S + 2 * F_pokazatel(x, a, b, c, d);
		x = x + h;
	}
	S = (h / 3) * (S + F_pokazatel(A, a, b, c, d) + F_pokazatel(B, a, b, c, d));
	printf("Определенный интеграл показательной функции на отрезке [%.3lf;%.3lf] равен: %.3lf\n", A, B, S);
}
//----------------------------------------------------------------------------------------------------------------------------------------
double F_log(double x, double a, double b, double c)
{
	double f;
	f = a * log(b * x) + c;
	return f;
}

void log()
{
	double S = 0, x, a, b, c, h, A, B;
	printf("Функция вида: a*ln(b*x)+c\n");
	printf("Введите начало отрезка (A) и конец (B)\n");
	printf("A="); scanf("%lf", &A);
	printf("B="); scanf("%lf", &B);
	while (A > B)
	{
		printf("Ошибка, начало отрезка должно быть меньше или равно концу отрезка, введите данные заново:\n");
		printf("A="); scanf("%lf", &A);
		printf("B="); scanf("%lf", &B);
	}
	printf("Введите коэффициенты:\n");
	printf("a="); scanf("%lf", &a);
	printf("b="); scanf("%lf", &b);
	printf("c="); scanf("%lf", &c);

	h = (B - A) / E;
	x = A + h;
	while (x < B)
	{
		S = S + 4 * F_log(x, a, b, c);
		x = x + h;
		if (x >= B) break;
		S = S + 2 * F_log(x, a, b, c);
		x = x + h;
	}
	S = (h / 3) * (S + F_log(A, a, b, c) + F_log(B, a, b, c));
	printf("Определенный интеграл логарифмической функции на отрезке [%.3lf;%.3lf] равен: %.3lf\n", A, B, S);
}
//----------------------------------------------------------------------------------------------------------------------------------------
double F_sin(double x, double a, double b, double c, double d)
{
	double f;
	f = a * sin(b * x + c) + d;
	return f;
}

void sin()
{
	double S = 0, x, a, b, c, h, A, B, d;
	printf("Функция вида: a*sin(b*x+c)+d\n");
	printf("Введите начало отрезка (A) и конец (B)\n");
	printf("A="); scanf("%lf", &A);
	printf("B="); scanf("%lf", &B);
	while (A > B)
	{
		printf("Ошибка, начало отрезка должно быть меньше или равно концу отрезка, введите данные заново:\n");
		printf("A="); scanf("%lf", &A);
		printf("B="); scanf("%lf", &B);
	}
	printf("Введите коэффициенты:\n");
	printf("a="); scanf("%lf", &a);
	printf("b="); scanf("%lf", &b);
	printf("c="); scanf("%lf", &c);
	printf("d="); scanf("%lf", &d);

	h = (B - A) / E;
	x = A + h;
	while (x < B)
	{
		S = S + 4 * F_sin(x, a, b, c, d);
		x = x + h;
		if (x >= B) break;
		S = S + 2 * F_sin(x, a, b, c, d);
		x = x + h;
	}
	S = (h / 3) * (S + F_sin(A, a, b, c, d) + F_sin(B, a, b, c, d));
	printf("Определенный интеграл синусоиды на отрезке [%.3lf;%.3lf] равен: %.3lf\n", A, B, S);
}
//----------------------------------------------------------------------------------------------------------------------------------------
double F_cos(double x, double a, double b, double c, double d)
{
	double f;
	f = a * cos(b * x + c) + d;
	return f;
}

void cos()
{
	double S = 0, x, a, b, c, h, A, B, d;
	printf("Функция вида: a*cos(b*x+c)+d\n");
	printf("Введите начало отрезка (A) и конец (B)\n");
	printf("A="); scanf("%lf", &A);
	printf("B="); scanf("%lf", &B);
	while (A > B)
	{
		printf("Ошибка, начало отрезка должно быть меньше или равно концу отрезка, введите данные заново:\n");
		printf("A="); scanf("%lf", &A);
		printf("B="); scanf("%lf", &B);
	}
	printf("Введите коэффициенты:\n");
	printf("a="); scanf("%lf", &a);
	printf("b="); scanf("%lf", &b);
	printf("c="); scanf("%lf", &c);
	printf("d="); scanf("%lf", &d);

	h = (B - A) / E;
	x = A + h;
	while (x < B)
	{
		S = S + 4 * F_cos(x, a, b, c, d);
		x = x + h;
		if (x >= B) break;
		S = S + 2 * F_cos(x, a, b, c, d);
		x = x + h;
	}
	S = (h / 3) * (S + F_cos(A, a, b, c, d) + F_cos(B, a, b, c, d));
	printf("Определенный интеграл косинусоиды на отрезке [%.3lf;%.3lf] равен: %.3lf\n", A, B, S);
}
//----------------------------------------------------------------------------------------------------------------------------------------
void integral()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k, again;
	do
	{
		printf("Выберете номер функции, определенный интеграл которой вы хотите вычислить:\n");
		printf("1) Полином степени N\n");
		printf("2) Степенная\n");
		printf("3) Показательная\n");
		printf("4) Логарифмическая\n");
		printf("5) Синусоида\n");
		printf("6) Косинусоида\n\n");
		printf("Вычислить определенный интеграл функции под номером: "); scanf("%d", &k);

		while ((k < 0) || (k > 6))
		{
			printf("Ошибка, функции под данным номером не существует, выберите функцию заново\n");
			printf("Вычислить определенный интеграл функции под номером: "); scanf("%d", &k);
			printf("\n");
		}

		switch (k)
		{
		case 1: PolynomOne(); break;
		case 2: stepen(); break;
		case 3: pokazatel(); break;
		case 4: log(); break;
		case 5: sin(); break;
		case 6: cos(); break;
		}

		printf("Вернуться в меню работы с функциями?\n");
		printf("Чтобы вернуться нажмите 0   Чтобы продолжить работу, нажмите 1\n"); scanf("%d", &again); printf("\n\n");
	} while (again == 1);
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
}