#include"Header_Combinatorica.h"//Аненков О.А.

int choose_comb, k0=1;
int n, k, m, A=1, C=1, P=1;

void Menu_Combinatorica()
{
	do
	{
		printf("Введите 0, чтобы вернуться в главное меню\n");
		printf("Выберете номер действия, которое вы хотите выполнить:\n");
		printf("1) Размещение с повторением\n");
		printf("2) Размещение без повторений\n");
		printf("3) Сочетание с повторением\n");
		printf("4) Сочетание без повторений\n");
		printf("5) Перестановки\n\n");
		printf("Выполнить действие под номером: "); scanf("%d", &choose_comb);

		while ((choose_comb < 0) || (choose_comb > 5))
		{
			printf("Ошибка, калькулятора под данным номером не существует, выберите калькулятор заново\n");
			printf("Использовать калькулятор под номером: "); scanf("%d", &choose_comb);
			printf("\n");
		}

		switch (choose_comb)
		{
		case 1: razm_povt(); break;
		case 2: razm_no_povt(); break;
		case 3: soch_povt(); break;
		case 4: soch_no_povt(); break;
		case 5: perestanovki(); break;
		case 0:
			return;
		}
		printf("Чтобы выйти в главное меню нажмите 0   Чтобы продолжить, нажмите 1\n"); scanf("%d", &k0); printf("\n"); printf("\n");
	} while (k0 == 1);
}

void razm_povt()
{
	printf("Введите число n: "); scanf("%d", &n);
	printf("Введите число m: "); scanf("%d", &m);

	while (n < m || n <= 0 || m <= 0)
	{
		printf("Ошибка, n должно быть больше m, а также вводимые значения должны быть больше нуля, введите данные заново:\n");
		printf("Введите число n: "); scanf("%d", &n);
		printf("Введите число m: "); scanf("%d", &m);
	}

	for (int i = 1; i <= m; i++)
	{
		A*=n;
	}
	printf("Число размещений с повторениями равно: %d\n", A);
	A = 0;
}

void razm_no_povt()
{
	int fact_n = 1, fact_n_m=1;
	printf("Введите число n: "); scanf("%d", &n);
	printf("Введите число m: "); scanf("%d", &m);

	while (n < m || n <= 0 || m <= 0)
	{
		printf("Ошибка, n должно быть больше m, а также вводимые значения должны быть больше нуля, введите данные заново:\n");
		printf("Введите число n: "); scanf("%d", &n);
		printf("Введите число m: "); scanf("%d", &m);
	}

	for (int i = 1; i <= n; i++)
	{
		fact_n *= i;
	}
	
	for (int i = 1; i <=(n - m); i++)
	{
		fact_n_m *= i;
	}
	A = fact_n / fact_n_m;
	printf("Число размещений без повторений равно: %d\n", A);
	A = 0;
}

void soch_povt()
{
	int fact_m = 1, fact_n_1 = 1, fact_n_m_1=1;
	printf("Введите число n: "); scanf("%d", &n);
	printf("Введите число m: "); scanf("%d", &m);

	while (n < m || n <= 0 || m <= 0)
	{
		printf("Ошибка, n должно быть больше m, а также вводимые значения должны быть больше нуля, введите данные заново:\n");
		printf("Введите число n: "); scanf("%d", &n);
		printf("Введите число m: "); scanf("%d", &m);
	}

	for (int i = 1; i <= m; i++)
	{
		fact_m *= i;
	}

	for (int i = 1; i <= (n-1); i++)
	{
		fact_n_1 *= i;
	}

	for (int i = 1; i <= (n + m - 1); i++)
	{
		fact_n_m_1 *= i;
	}
	C = fact_n_m_1/(fact_m*fact_n_1);
	printf("Число сочетаний с повторениями равно: %d\n", C);
	C = 0;
}

void soch_no_povt()
{
	int fact_n=1, fact_m = 1, fact_n_m = 1;
	printf("Введите число n: "); scanf("%d", &n);
	printf("Введите число m: "); scanf("%d", &m);

	while (n < m || n <= 0 || m <= 0)
	{
		printf("Ошибка, n должно быть больше m, а также вводимые значения должны быть больше нуля, введите данные заново:\n");
		printf("Введите число n: "); scanf("%d", &n);
		printf("Введите число m: "); scanf("%d", &m);
	}

	for (int i = 1; i <= n; i++)
	{
		fact_n *= i;
	}

	for (int i = 1; i <= m; i++)
	{
		fact_m *= i;
	}

	for (int i = 1; i <= (n - m); i++)
	{
		fact_n_m *= i;
	}
	C = fact_n/(fact_m*fact_n_m);
	printf("Число сочетаний без повторений равно: %d\n", C);
	C = 0;
}

void perestanovki()
{
	int fact_n = 1;
	printf("Введите число n: "); scanf("%d", &n);

	while (n <= 0)
	{
		printf("Ошибка, n должно быть больше нуля, введите данные заново:\n");
		printf("Введите число n: "); scanf("%d", &n);
	}

	for (int i = 1; i <= n; i++)
	{
		fact_n *= i;
	}
	P = fact_n;
	printf("Число перестановок равно: %d\n", P);
	P = 0;
}
