#include"Header_Combinatorica.h"//Аненков О.А.

void Menu_Combinatorica()
{
	int choose_comb, k0 = 1;
	do
	{
		printf("Выберете номер действия, которое вы хотите выполнить:\n");
		printf("1) Размещение с повторением\n");
		printf("2) Размещение без повторений\n");
		printf("3) Сочетание с повторением\n");
		printf("4) Сочетание без повторений\n");
		printf("5) Перестановки\n\n");
		printf("Выполнить действие под номером: "); scanf("%d", &choose_comb);

		while ((choose_comb < 1) || (choose_comb > 5))
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
		}
		printf("Чтобы выйти в главное меню нажмите 0   Чтобы продолжить, нажмите 1\n"); scanf("%d", &k0); printf("\n"); printf("\n");
	} while (k0 == 1);
}

void razm_povt()
{
	int n, m, A = 1;
	printf("Введите число n: "); scanf("%d", &n);
	printf("Введите число m: "); scanf("%d", &m);

	while (n < m || n < 0 || m < 0 || (n == 0 && m == 0))
	{
		printf("Ошибка, n должно быть больше m, а также вводимые значения должны быть больше или равны нулю (но не равны нулю одновременно), введите данные заново:\n");
		printf("Введите число n: "); scanf("%d", &n);
		printf("Введите число m: "); scanf("%d", &m);
	}

	for (int i = 1; i <= m; i++)
	{
		A *= n;
	}
	printf("Число размещений с повторениями равно: %d\n", A);
}

void razm_no_povt()
{
	int n, m, A = 1;
	int fact_n = 1, fact_n_m = 1;
	printf("Введите число n (меньше 13 и больше нуля): "); scanf("%d", &n);
	printf("Введите число m: "); scanf("%d", &m);

	while (n < m || n < 0 || m < 0 || n>12 || m>12)
	{
		printf("Ошибка, n должно быть больше m, а также вводимые значения должны быть больше или равны нулю и меньше 13, введите данные заново:\n");
		printf("Введите число n: "); scanf("%d", &n);
		printf("Введите число m: "); scanf("%d", &m);
	}

	for (int i = 1; i <= n; i++)
	{
		fact_n *= i;
	}

	for (int i = 1; i <= (n - m); i++)
	{
		fact_n_m *= i;
	}
	A = fact_n / fact_n_m;
	printf("Число размещений без повторений равно: %d\n", A);
}

void soch_povt()
{
	int n, m, C = 1;
	int fact_m = 1, fact_n_1 = 1, fact_n_m_1 = 1;
	printf("Введите число n (меньше 13 и больше или равное нулю): "); scanf("%d", &n);
	printf("Введите число m (меньше 13 и больше или равное нулю): "); scanf("%d", &m);

	while (n < m || n < 0 || m < 0 || n>12 || m>12 || (n + m - 1)>12)
	{
		printf("Ошибка, n должно быть больше или равно m, а также вводимые значения должны быть больше нуля и меньше 13, а (n+m-1)<13, введите данные заново:\n");
		printf("Введите число n: "); scanf("%d", &n);
		printf("Введите число m: "); scanf("%d", &m);
	}

	for (int i = 1; i <= m; i++)
	{
		fact_m *= i;
	}

	for (int i = 1; i <= (n - 1); i++)
	{
		fact_n_1 *= i;
	}

	for (int i = 1; i <= (n + m - 1); i++)
	{
		fact_n_m_1 *= i;
	}
	C = fact_n_m_1 / (fact_m * fact_n_1);
	printf("Число сочетаний с повторениями равно: %d\n", C);
}

void soch_no_povt()
{
	int n, m, C = 1;
	int fact_n = 1, fact_m = 1, fact_n_m = 1;
	printf("Введите число n (меньше 13 и больше или равное нулю): "); scanf("%d", &n);
	printf("Введите число m (меньше 13 и больше или равное нулю): "); scanf("%d", &m);

	while (n < m || n < 0 || m < 0 || n>12 || m>12)
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
	C = fact_n / (fact_m * fact_n_m);
	printf("Число сочетаний без повторений равно: %d\n", C);
}

void perestanovki()
{
	int n, m, P = 1;
	int fact_n = 1;
	printf("Введите число n (меньше 13 и больше или равное нулю): "); scanf("%d", &n);

	while (n < 0 || n>12)
	{
		printf("Ошибка, n должно быть больше нуля  и меньше 13, введите данные заново:\n");
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