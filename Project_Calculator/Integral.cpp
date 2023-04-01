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
	printf("������� ����: a0+a1*x+a2*x^2+...+aN*x^N\n");
	printf("������� ������ ������� (A) � ����� (B)\n");
	printf("A="); scanf("%lf", &A);
	printf("B="); scanf("%lf", &B);
	while (A > B)
	{
		printf("������, ������ ������� ������ ���� ������ ��� ����� ����� �������, ������� ������ ������:\n");
		printf("A="); scanf("%lf", &A);
		printf("B="); scanf("%lf", &B);
	}

	printf("������� ����� N (�� ������� ������ ������������): "); scanf("%d", &N);
	while (N < 0)
	{
		printf("������, N ������ ���� ������ ��� ����� ����, ������� ������ ������:\n");
		printf("������� ����� N: "); scanf("%d", &N);
	}

	int* a;
	a = (int*)malloc(N * sizeof(int));
	printf("������� ������������ �:\n");
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
	printf("������������ �������� �������� �� ������� [%.3lf;%.3lf] � N=%d, �����: %.3lf\n", A, B, N-1,S);
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
	printf("������� ����: a*x^b+c\n");
	printf("������� ������ ������� (A) � ����� (B)\n");
	printf("A="); scanf("%lf", &A);
	printf("B="); scanf("%lf", &B);
	while (A > B)
	{
		printf("������, ������ ������� ������ ���� ������ ��� ����� ����� �������, ������� ������ ������:\n");
		printf("A="); scanf("%lf", &A);
		printf("B="); scanf("%lf", &B);
	}
	printf("������� ������������:\n");
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
	printf("������������ �������� ��������� ������� �� ������� [%.3lf;%.3lf] �����: %.3lf\n", A, B, S);
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
	printf("������� ����: a*b^(c*x)+d\n");
	printf("������� ������ ������� (A) � ����� (B)\n");
	printf("A="); scanf("%lf", &A);
	printf("B="); scanf("%lf", &B);
	while (A > B)
	{
		printf("������, ������ ������� ������ ���� ������ ��� ����� ����� �������, ������� ������ ������:\n");
		printf("A="); scanf("%lf", &A);
		printf("B="); scanf("%lf", &B);
	}
	printf("������� ������������:\n");
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
	printf("������������ �������� ������������� ������� �� ������� [%.3lf;%.3lf] �����: %.3lf\n", A, B, S);
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
	printf("������� ����: a*ln(b*x)+c\n");
	printf("������� ������ ������� (A) � ����� (B)\n");
	printf("A="); scanf("%lf", &A);
	printf("B="); scanf("%lf", &B);
	while (A > B)
	{
		printf("������, ������ ������� ������ ���� ������ ��� ����� ����� �������, ������� ������ ������:\n");
		printf("A="); scanf("%lf", &A);
		printf("B="); scanf("%lf", &B);
	}
	printf("������� ������������:\n");
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
	printf("������������ �������� ��������������� ������� �� ������� [%.3lf;%.3lf] �����: %.3lf\n", A, B, S);
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
	printf("������� ����: a*sin(b*x+c)+d\n");
	printf("������� ������ ������� (A) � ����� (B)\n");
	printf("A="); scanf("%lf", &A);
	printf("B="); scanf("%lf", &B);
	while (A > B)
	{
		printf("������, ������ ������� ������ ���� ������ ��� ����� ����� �������, ������� ������ ������:\n");
		printf("A="); scanf("%lf", &A);
		printf("B="); scanf("%lf", &B);
	}
	printf("������� ������������:\n");
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
	printf("������������ �������� ��������� �� ������� [%.3lf;%.3lf] �����: %.3lf\n", A, B, S);
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
	printf("������� ����: a*cos(b*x+c)+d\n");
	printf("������� ������ ������� (A) � ����� (B)\n");
	printf("A="); scanf("%lf", &A);
	printf("B="); scanf("%lf", &B);
	while (A > B)
	{
		printf("������, ������ ������� ������ ���� ������ ��� ����� ����� �������, ������� ������ ������:\n");
		printf("A="); scanf("%lf", &A);
		printf("B="); scanf("%lf", &B);
	}
	printf("������� ������������:\n");
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
	printf("������������ �������� ����������� �� ������� [%.3lf;%.3lf] �����: %.3lf\n", A, B, S);
}
//----------------------------------------------------------------------------------------------------------------------------------------
void integral()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k, again;
	do
	{
		printf("�������� ����� �������, ������������ �������� ������� �� ������ ���������:\n");
		printf("1) ������� ������� N\n");
		printf("2) ���������\n");
		printf("3) �������������\n");
		printf("4) ���������������\n");
		printf("5) ���������\n");
		printf("6) �����������\n\n");
		printf("��������� ������������ �������� ������� ��� �������: "); scanf("%d", &k);

		while ((k < 0) || (k > 6))
		{
			printf("������, ������� ��� ������ ������� �� ����������, �������� ������� ������\n");
			printf("��������� ������������ �������� ������� ��� �������: "); scanf("%d", &k);
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

		printf("��������� � ���� ������ � ���������?\n");
		printf("����� ��������� ������� 0   ����� ���������� ������, ������� 1\n"); scanf("%d", &again); printf("\n\n");
	} while (again == 1);
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
}